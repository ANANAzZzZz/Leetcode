class Solution {
public:
int countStudents(vector<int>& students, vector<int>& sandwiches) {
  // students queue
  queue<int> q;

  for (int& student: students) {
    q.push(student);
  }

  // sandwich stack
  stack<int> st;

  for (int i = sandwiches.size() - 1; i > -1; i--) {
    st.push(sandwiches[i]);
  }

  int tmp;
  int sequence = 0;
  while (true) {
    if (q.front() == st.top()) {
      st.pop();
      q.pop();

      sequence = 1;

    } else {
      tmp = q.front();
      q.pop();
      q.push(tmp);

      if (tmp == q.front()) {
        sequence++;
      } else {
        sequence = 1;
      }
    }

    if (sequence > q.size()) {
      break;
    }
  }
  return q.size();
}

};

// Time complexity - O(n)
// Space complexity - O(n)