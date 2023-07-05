class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int, int> map;
        sort(nums.begin(), nums.end());

        // hashing indices
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]] = i;
        }

        for (int i = 0; i < nums.size() - 2; i++) {
            if (nums[i] > 0) {
                break;
            }
            for (int j = i + 1; j < nums.size() - 1; j++) {
                int required = -1*(nums[i] + nums[j]);

                if (map.find(required) != map.end() && map[required] > j) {
                    ans.push_back({nums[i], nums[j], required});
                }
               j = map[nums[j]];
            }
           i = map[nums[i]];
        }
    return ans;
    }
};

// Time complexity - O(n^2)
// Space complexity - O(n)