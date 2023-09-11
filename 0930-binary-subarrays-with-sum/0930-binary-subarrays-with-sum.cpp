class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> counts;
        counts[0] = 1;
        int ans = 0;
        int curr = 0;

        for (auto& num : nums) {
            curr += num % 2;
            ans += counts[curr - goal];
            counts[curr]++;
        }
        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)