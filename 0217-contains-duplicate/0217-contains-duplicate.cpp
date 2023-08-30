class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> counts;

        for (auto& num: nums) {
            counts[num]++;

            if (counts[num] >= 2) {
                return true;
            }
        }

        return false;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)