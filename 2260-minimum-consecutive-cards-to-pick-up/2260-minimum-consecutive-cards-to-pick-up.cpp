class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int> map;
        int ans = INT_MAX;

        for(int i = 0; i < cards.size(); i++) {
            if (map.find(cards[i]) != map.end()) {
                ans = min(ans, i - map[cards[i]] + 1);
            }
            map[cards[i]] = i;
        }

        if (ans == INT_MAX) {
            return -1;
        }

        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)