class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        priority_queue<int, vector<int>, greater<int>> indices;

        vector<int> ans;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            pq.push({nums[i], i});
        }

        for (int i = 0; i < k; i++) {
            indices.push(pq.top().second);
            pq.pop();
        }

        if (indices.empty()) {
            return {};
        }

        for (int i = 0; i < n; i++) {
            if (i == indices.top()) {
                ans.push_back(nums[indices.top()]);
                indices.pop();
            }
        }

        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)