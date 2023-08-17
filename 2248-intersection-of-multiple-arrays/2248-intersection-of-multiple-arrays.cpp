class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int> map;
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                map[nums[i][j]]++;
            }
        }

        for (auto& num : map) {
            if (num.second == n) {
                ans.push_back(num.first);
            }
        }

        return ans;
    }
};

// Time complexity - O(n^2)
// Space complexity - O(n)