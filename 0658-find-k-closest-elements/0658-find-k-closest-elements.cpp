class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < k; i++) {
            ans.push_back(nums[i]);
        }

        for (int i = k; i < n; i++) {
            if (abs(nums[i] - x) < abs(nums[i - k] - x) || (abs(nums[i] - x) == abs(nums[i - k] - x) && nums[i] < nums[i - k])) {
                auto it = ans.begin();
                ans.erase(it);
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(1)