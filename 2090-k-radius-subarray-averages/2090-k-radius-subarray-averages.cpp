class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<long int> prefix = {nums[0]};
        vector<int> ans;

        if (k == 0) {
            return nums;
        }

        for (int i = 1; i < nums.size(); i++) {
            prefix.push_back(prefix.back() + nums[i]);
        }

        int j = 0;
        int windowSize = 2*k + 1;
        for (int i = 0; i < prefix.size(); i++) {
            if (i < k || i + k >= prefix.size()) {
                ans.push_back(-1);
                continue;
            }

            if (i == k) {
                ans.push_back((prefix[i + k]) / windowSize);
                continue;
            }
            
            ans.push_back((prefix[i + k] - prefix[j]) / windowSize);
            j++;
        }

        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)