class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> losers;
        set<int> winners;
        vector<vector<int>> ans = {{}, {}};

        for(int i = 0; i < matches.size(); i++) {
            winners.insert(matches[i][0]);
            losers[matches[i][1]]++;
        }

        for (auto& player : losers) {
            if (player.second == 1) {
                ans[1].push_back(player.first);
            }
        }

        for (auto& player : winners) {
            if (losers.find(player) == losers.end()) {
                ans[0].push_back(player);
            }
        }

        return ans;
    }
};

// Time complexity - O(n), where n - length of matches
// Space complexity - O(n)