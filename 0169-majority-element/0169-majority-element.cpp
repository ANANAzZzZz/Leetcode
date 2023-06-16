class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> Map;
        int maxCount;
        int n;

        n = nums.size();

        for (int i = 0; i < n; i++) {
            auto it = Map.find(nums[i]);

            if (it != Map.end()) {
                it->second++;
            } else {
                Map.emplace(nums[i], 1);
            }
        }

        auto itCurrent = Map.cbegin();
        auto itMax = itCurrent;

        for (; itCurrent != Map.cend(); itCurrent++) {
            if (itMax->second <= itCurrent->second) {
                itMax = itCurrent;
            }
        }

        return itMax->first;
    }
};

// Time complexity - O(n)