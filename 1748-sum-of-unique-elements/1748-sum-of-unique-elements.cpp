class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> count;
        int ans = 0;

        for (auto& num: nums) {
            count[num]++;
        }

        for (auto& [key, value]: count) {
            if (count[key] == 1) {
                ans += key;
            }
        }

        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)