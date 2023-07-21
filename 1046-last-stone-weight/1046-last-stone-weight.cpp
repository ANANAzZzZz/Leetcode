class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if (stones.size() == 1) {
            return stones[0];
        }
        
        priority_queue<int> pq;

        for (auto stone : stones) {
            pq.push(stone);
        }

        while (pq.size() != 1) {
            int y = pq.top();
            pq.pop();
  
            int x = pq.top();
            pq.pop();

            if (x != y) {
                y -= x;
                pq.push(y);
            }
            
            if (pq.empty()) {
                return 0;
            }
        }
        return pq.top();
    }
};

// Time complexity - O(n)
// Space complexity - O(n)