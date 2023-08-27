class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<vector<int>> columns(grid.size());
        int i = 0;
        int j = 0;

        while (j < grid.size()) {
            columns[i].push_back(grid[j][i]);
            i++;
            if (i == grid.size()) {
                i = 0;
                j++;
            }
        }

        int ans = 0;
        for (auto& column: columns) {
            for (auto& row: grid) {
                if (row == column) {
                    ans++;
                }
            }
        }

        return ans;
    }
};

// Time complexity - O(n^2)
// Space complexity - O(n)