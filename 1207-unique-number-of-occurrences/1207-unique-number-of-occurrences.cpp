class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> count;
        unordered_set<int> appeared;

        for (auto& num: arr) {
            count[num]++;
        }

        for(auto& [key, value]: count) {
            if (appeared.find(value) != appeared.end()) {
                return false;
            }
            appeared.insert(value);
        }
        return true; 
    }
};

// Time complexity - O(n)
// Space complexity - O(n + m)
// n - size of arr, m - amount of unique occurrences 