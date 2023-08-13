class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long total = 0;
        long long curr = 0;
        int ans = 0;

        for (auto num : nums) {
            total += num;
        }

        for (int i = 0; i < nums.size() - 1; i++) {
            curr += nums[i];

            if (curr >= total - curr) {
                ans++;
            }
        }

        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(1)