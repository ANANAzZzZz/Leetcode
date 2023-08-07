class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> prefix = {nums[0]};
        int minValue = prefix[0];

        for (int i = 1; i < nums.size(); i++) {
            prefix.push_back(prefix.back() + nums[i]);
            minValue = min(minValue, prefix.back());
        }

        if (minValue < 0) {
            return abs(minValue) + 1;
        } else {
            return 1;
        }
    }
};

// Time complexity - O(n)
// Space complexity - O(n)