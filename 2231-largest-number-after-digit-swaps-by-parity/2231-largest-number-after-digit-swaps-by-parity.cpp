class Solution {
public:
    int largestInteger(int num) {
        unordered_set<int> odds;
        priority_queue<int> Epq;
        priority_queue<int> Opq;

        int n = to_string(num).length();

        for (int i = n - 1; num > 0; i--) {
            int digit = num % 10;

            if (digit % 2 != 0) {
                odds.emplace(i);
                Opq.push(digit);
            } else {
                Epq.push(digit);
            }
            
            num /= 10;
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans *= 10;
            
            if (odds.find(i) != odds.end()) {
                ans += Opq.top();
                Opq.pop();
            } else {
                ans += Epq.top();
                Epq.pop();
            }
        }

        return ans;
    }
};