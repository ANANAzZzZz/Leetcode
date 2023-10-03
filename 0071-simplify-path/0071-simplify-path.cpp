class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string ans;

        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/') {
                continue;
            }

            ans = "";
            while (i < path.size() && path[i] != '/') {
                ans += path[i];
                i++;
            }

            if (ans == ".") {
                continue;
            } else if (ans == "..") {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(ans);
            }
        }

        ans = "";
        while (!st.empty()) {
            ans = "/" + st.top() + ans;
            st.pop();
        }

        if (ans.size() == 0) {
            return "/";
        }

        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)