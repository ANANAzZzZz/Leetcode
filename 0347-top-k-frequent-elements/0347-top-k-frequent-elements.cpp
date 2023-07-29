class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        priority_queue<pair<int, int>> pq;
        vector<int> ans;

        int n = nums.size();
        
        for (auto num : nums) {
            map[num]++;
        }

        for (auto i : map) {
            pq.push({i.second, i.first});
        }

        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};

// Time complexity - O(logn)
// Space complexity - O(n)