class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> count;
        int ans = -1;

        for (auto& num: arr) {
            count[num]++;
        }

        for (auto [key, value]: count) {
            if (key == value) {
                ans = max(ans, key);
            }
        }

        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)