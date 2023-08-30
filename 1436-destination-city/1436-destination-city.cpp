class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> destination, departure;

        for (auto& path: paths) {
            departure.insert(path[0]);
            destination.insert(path[1]);
        }

        for (auto& p: destination) {
            if (departure.count(p) == 0 && destination.count(p)) {
                return p;
            }
        }
        return string();
    }
};

// Time complexity - O(n)
// Space complexity - O(n)