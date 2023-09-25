class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string ans;

        for (auto& ch : s) {
            if (st.empty()) {
                st.push(ch);
                continue;
            }

            if (st.top() == ch) {
                st.pop();
                continue;
            }
            st.push(ch);
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)