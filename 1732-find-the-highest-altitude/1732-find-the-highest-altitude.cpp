class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0;
        int ans = 0;

        for (int i = 0; i < gain.size(); i++) {
            curr += gain[i];
            ans = max(ans, curr);
        }

        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(1)