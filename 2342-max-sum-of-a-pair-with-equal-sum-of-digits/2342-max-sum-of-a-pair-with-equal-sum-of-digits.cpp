class Solution {
public:
    int maximumSum(vector<int>& nums) {
        map<int, vector<int>> map;
        int ans = -1;

        int sum = 0;
        for (auto& num: nums) {
            sum = getSumOfDigit(num);
            map[sum].push_back(num);
        }

        for (auto& [key, value]: map) {
            if (value.size() >= 2) {
                sort(value.begin(), value.end(), greater<int>());
                cout << value[0] + value[1] << endl;
                ans = max(ans, value[0] + value[1]);
            }
        }
        return ans;
    }

    int getSumOfDigit(int digit) {
        int sum = 0;

        while (digit) {
            sum += digit % 10;
            digit /= 10;
        }
        return sum;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)