class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        int ans = 0;
        int curr = 0;

        for (int i = 0; i < nums.size(); i++) {
            counts[curr]++;
            curr += nums[i] % 2;
            ans += counts[curr - k];
        }
        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)