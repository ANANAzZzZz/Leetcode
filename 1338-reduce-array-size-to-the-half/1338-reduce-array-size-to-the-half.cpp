class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> map;
        priority_queue<pair<int, int>> pq;
    
        int n = arr.size();
        int sizeCount = 0;
        int digitsCount = 0;

        for (auto num : arr) {
            map[num]++;
        }

        for (auto it = map.begin(); it != map.end(); it++) {
            pq.push({it->second, it->first});
        }

        for (int i = 0; i < n; i++) {
            if (digitsCount >= n / 2) {
                return sizeCount;
            }
    
            digitsCount += pq.top().first;
            pq.pop();

            sizeCount++;
        }

        return sizeCount;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)