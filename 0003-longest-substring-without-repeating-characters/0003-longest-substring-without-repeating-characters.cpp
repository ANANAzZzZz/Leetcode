class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int r = 0, l = 0;
        unordered_set<char> set;

        while (r < s.size()) {
            if (set.find(s[r]) == set.end()) {
                set.insert(s[r++]);
            } else {
                set.erase(s[l++]);
            }
            ans = max(ans, r - l);
        }
        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)