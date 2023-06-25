class Solution {
public:
    bool backspaceCompare(string s, string t) {
      stack<char> stS;
      stack<char> stT;

      for (int i = 0; i < s.size(); i++) {
        if (s[i] != '#') {
          stS.emplace(s[i]);
        } else {
          if (!stS.empty()) {
            stS.pop();
          }
        }
      }

      for (int i = 0; i < t.size(); i++) {
        if (t[i] != '#') {
          stT.emplace(t[i]);
        } else {
          if (!stT.empty()) {
            stT.pop();
          }
        }
      }
      return stS==stT;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)