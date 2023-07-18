class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        long long ans = 0;

        for (auto gift : gifts) {
            pq.push(gift);
        }

        for (int i = 0; i < k; i++) {
            int el = pq.top();
            pq.pop();
            pq.push(sqrt(el));
        }

        while (!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
        
        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)