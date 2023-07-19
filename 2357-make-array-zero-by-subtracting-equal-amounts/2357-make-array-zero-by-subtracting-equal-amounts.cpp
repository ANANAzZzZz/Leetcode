class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> set;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            set.emplace(nums[i]);
        }

        if (*set.begin() == 0) {
            return set.size() - 1;
        } else {
            return set.size();
        }
    }
};

// Time complexity - O(n)
// Space complexity - O(n)