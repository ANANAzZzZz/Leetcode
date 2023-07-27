class Solution {
public:
    int fillCups(vector<int>& amount) {
        int secondsLasted = 0;
        priority_queue<int> pq;

        for (auto i : amount) {
            pq.push(i);
        }

        // case [0, 0, 0]
        if (pq.top() == 0) {
            return 0;
        }

        while(!pq.empty()) {
            int x = pq.top();
            pq.pop();

            int y = pq.top();
            pq.pop();

            // case [x, 0, 0]
            if (y == 0) {
                while (x != 0) {
                    x--;
                    secondsLasted++;
                }
                return secondsLasted;
            }

            x--;
            y--;
            secondsLasted++;

            pq.push(x);
            pq.push(y);
        }

        return secondsLasted;
    }
};
