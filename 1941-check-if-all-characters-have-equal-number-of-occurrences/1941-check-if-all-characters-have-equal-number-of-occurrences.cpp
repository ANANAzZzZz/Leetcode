class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> map;

        for(auto& l : s) {
            map[l]++;
        }

        int x = map[s[0]];
        for (auto [key, val] : map) {
            if (val != x) {
                return false;
            }
        }

        return true;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)