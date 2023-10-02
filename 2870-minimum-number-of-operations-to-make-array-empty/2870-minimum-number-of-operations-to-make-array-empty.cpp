class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> counts;
        int ans = 0;

        for (auto& num : nums) {
            counts[num]++;
        }

        for (auto& num : counts) {
            int freq = num.second;

            while (freq > 10) {
                freq -= 3;
                ans++;
            }

            if (freq == 1) {
                return -1;
            } else if (freq == 2 || freq == 3) {
                ans++;
            } else if (4 <= freq && freq <= 6) {
                ans += 2;
            } else if (7 <= freq && freq <= 9) {
                ans += 3;
            } else {
                ans += 4;
            }
        }
        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)