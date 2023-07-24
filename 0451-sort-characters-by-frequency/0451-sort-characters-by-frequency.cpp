class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int, char>> pq;
        unordered_map<char, int> map;
        
        int n = s.length();

        for (int i = 0; i < n; i++) {
            map[s[i]]++;
        }

        for (int i = 0; i < n; i++) {
            if (s[i] == s[i + 1] || map.find(s[i]) == map.end()) {
                continue;
            }

            pq.push({map[s[i]], s[i]});
            map.erase(s[i]);
        }
        
        s = "";
        while (!pq.empty()) {
            s += string(pq.top().first, pq.top().second);
            pq.pop();
        }

        return s;
    }
};

// Time complexity - O(n);
// Space complexity - O(n);