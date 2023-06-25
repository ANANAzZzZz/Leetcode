class RecentCounter {
public:
    queue<int> requests;
    
    int ping(int t) {
        int inclusiveRange = t - 3000;
        
        requests.push(t);

        for (;;) {
            if (requests.front() < inclusiveRange || requests.front() > t) {
                if (!requests.empty()) {
                    requests.pop();
                }
            } else {
                break;
            }
        }
        return requests.size();
    }
};

// Time complexity - O(n)
// Space complexity - O(n)