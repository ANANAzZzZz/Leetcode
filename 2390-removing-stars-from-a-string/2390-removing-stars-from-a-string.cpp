class Solution {
public:
    string removeStars(string s) {
        string ans;
        stack<int> st;

        for (auto& c : s) {
            if (!st.empty()) {
                if (c == '*') {
                    st.pop();
                    continue;
                }
            }
            st.push(c);
        }

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)