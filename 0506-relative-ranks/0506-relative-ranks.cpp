class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;
        vector<string> ans(score.size());
        int n = score.size();

        for (int i = 0; i < n; i++) {
            pq.push({score[i], i});
        }

        int counter = 1;
        while (!pq.empty()) {
            int pos = pq.top().second;
            
            if (counter == 1) {
                ans[pos] = "Gold Medal";
            }
            if (counter == 2) {
                ans[pos] = "Silver Medal";
            }
            if (counter == 3) {
                ans[pos] = "Bronze Medal";
            }
            if (counter > 3) {
                ans[pos] = to_string(counter);
            }

            counter++;
            pq.pop();
        }

        return ans;
    }
};

// Time complexity - O(n);
// Space complexity - O(n);