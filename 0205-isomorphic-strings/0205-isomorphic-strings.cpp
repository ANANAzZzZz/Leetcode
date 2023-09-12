class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m1, m2;

        for (int i = 0; i < s.size(); i++) {
            if ((m1[t[i]] && m1[t[i]] != s[i]) || (m2[s[i]] && m2[s[i]] != t[i])) {
                return false;
            }

            m1[t[i]] = s[i];
            m2[s[i]] = t[i];
        }

        for (int i = 0; i < s.size(); i++) {
            if (!m1[t[i]] == s[i] && !m2[s[i]] == t[i]) {
                return false;
            }
        }
        return true;
    }
};

// Time complexity - O(n)
// Space complexity - O(n + m)