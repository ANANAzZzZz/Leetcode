class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i = 0;
        int j = 0;

        while (i < s.size()) {
            maxCost -= abs(s[i] - t[i++]);

            if (maxCost < 0) {
                maxCost += abs(s[j] - t[j++]);
            }
       }

        return i - j;
    }
};

// Time complexity - O(n)
// Space complexity - O(1)