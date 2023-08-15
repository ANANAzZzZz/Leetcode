class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int right = 0;

        for (auto num : nums) {
            right += num;
        }

        int left = 0;
        for (int i = 0; i < nums.size(); i++) {
            left += nums[i];

            if (left == right) {
                return i;
            }

            right -= nums[i];
        }

        return -1;
    }
};

// Time complexity - O(n)
// Space complexity - O(1)