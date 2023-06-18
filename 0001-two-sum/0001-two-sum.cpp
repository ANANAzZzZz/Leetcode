class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = 1;
        vector<int> answer;

        while (i < j) {
            if ((nums[i] + nums[j]) == target) {
                answer.push_back(i);
                answer.push_back(j);

                return answer;
            } else {
                j++;
            }
            if (j == nums.size()) {
                i++;
                j = i + 1;
             }
         }
        return answer;
    }
};

// Time complexity - O(n^2)
// Space complexity - O(1)