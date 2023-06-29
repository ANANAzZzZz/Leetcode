class Solution {
public:
    bool isValid(string s) { // (){}}{
        stack<char> st; 

        if (s.length() < 2) { 
            return false;
        }
        
        if (s[0] == ')' || s[0] == ']' || s[0] == '}') {
            return false;
        }

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (!st.empty()) {
                    if ((s[i] == ')' && st.top() != '(') || (s[i] == ']' && st.top() != '[') || (s[i] == '}' && st.top() != '{')) {
                        return false;
                    }
                } else {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

// space complexity - O(n)
// time complexity - O(n)

