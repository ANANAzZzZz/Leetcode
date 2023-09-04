class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> set;
        int ans = 0;
        int curr = 0;
        int r = 0, l = 0;

        while (r < nums.size()) {
            if (set.find(nums[r]) == set.end()) {
                set.insert(nums[r]);
                curr += nums[r++];
            } else {
                set.erase(nums[l]);
                curr -= nums[l++];
            }
            ans = max(ans, curr);
        }
        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)