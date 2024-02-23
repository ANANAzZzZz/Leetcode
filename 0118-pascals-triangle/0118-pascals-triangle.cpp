class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 1) {
            return {{1}};
        }

        if (numRows == 2) {
            return {{1}, {1, 1}};
        }

        vector<vector<int>> ans = {{1}, {1, 1}};

        for (int i = 0; i < numRows - 2; i++) {
            vector<int> newArr = {1};

            int l = 0;
            int r = 1; 
            
            for (int j = 0; j < ans.back().size() - 1; j++) {
                newArr.push_back(ans.back()[l] + ans.back()[r]);
                
                l++;
                r++;
            }
            newArr.push_back(1);
            ans.push_back(newArr);
        }
        return ans;
    }
};
