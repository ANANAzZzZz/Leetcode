class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> set;
        int ans = 0;

        for(char& el: jewels) {
            set.insert(el);
        }

        for (char& stone: stones) {
            if (set.find(stone) != set.end()) {
                ans++;
            }
        }

        return ans;
    }
};

// Time complexity - O(n + m), where n - length of jewels, m - length of stones
// Space complexity - O(n)