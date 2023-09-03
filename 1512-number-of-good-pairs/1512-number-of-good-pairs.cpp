class Solution {
public:
    // - Brute force solution -
    // int numIdenticalPairs(vector<int>& nums) {
    //     int ans = 0;

    //     for (int r = 1, l = 0; l < nums.size(); r++) {
    //         if (nums[l] == nums[r] && l < r) {
    //             ans++;
    //         }
    //         if (r == nums.size() - 1) {
    //             r = l;
    //             l++;
    //         }
    //     }
    //     return ans;
    // }
    // Time complexity - O(n^2)
    // Space complexity - O(1)

    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count;
        int ans = 0;

        for (auto& num: nums) {
            ans += count[num];
            count[num]++;
        }
        
        return ans;
    }
};

    // Time complexity - O(n)
    // Space complexity - O(n)