class Solution {
    public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> soldiers;
        vector<int> ans;

        int n = mat.size();
        int m = mat[0].size();

        for(int i = 0; i < n; i++) {
            soldiers.push_back(make_pair(0, i));
            for (int j = 0; j < m; j++) {
                soldiers[i].first += mat[i][j];
            }
        }
        
        sort(soldiers.begin(), soldiers.end());
        
        for (int i = 0; i < k; i++) {
            ans.push_back(soldiers[i].second);
        }

        return ans;
    }
};

// Time complexity - O(n*m)
// Space complexity - O(n)