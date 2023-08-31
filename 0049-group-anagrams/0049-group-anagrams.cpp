class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> ans;

        for (auto& word: strs) {
            string pos = word;
            sort(pos.begin(), pos.end());
            map[pos].push_back(word);
        }

        for (auto& [key, value]: map) {
            ans.push_back(value);
        }

        return ans;
    }
};

// Time complexity - (n*log(n))
// Space complexity - O(n)