class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> Map;
        int maxCount;
        int n;

        maxCount = 0;
        n = nums.size();

        for (int i = 0; i < n; i++) {
            auto it = Map.find(nums[i]);

            if (it != Map.end()) {
            it->second++;
            } else {
            Map.emplace(nums[i], 1);
            }
        }

        for (auto it = Map.cbegin(); it != Map.cend(); it++) {
            cout << it->first << it->second << " ";
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