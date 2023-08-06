class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int ans = 0;
        int zeroes = 0;

        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] == 0) {
                zeroes++;
            }

            if (zeroes > k) {
                while (nums[l] != 0) {
                    l++;
                }
                l++;
                zeroes--;
            }

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(1)