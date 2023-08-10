class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int l = 0;
        int r = n - 1;

        for (int i = n - 1; i >= 0; i--) {
            if (abs(nums[r]) > abs(nums[l])) {
                ans[i] = pow(nums[r], 2);
                r--;
            } else {
                ans[i] = pow(nums[l], 2);
                l++;
            }
        }

        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(1)