class Solution {
public:
    string makeGood(string s) {
        string ans = "";

        ans.push_back(s[0]);
        for (int i = 1; i < s.size(); i++) {
            if (!ans.empty() && (fabs(s[i] - ans.back()) == 32)) {
                ans.pop_back();
                continue;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};

// Time complexity - O(n)
// Space comeplexity O(n)