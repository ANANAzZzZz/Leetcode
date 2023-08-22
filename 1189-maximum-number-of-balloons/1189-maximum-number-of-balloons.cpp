class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> count;

        for (int i = 0; i < text.size(); i++) {
            count[text[i]]++;
        }

        return min({count['n'], count['a'], count['b'], count['l'] / 2, count['o'] / 2});
    }
};

// Time complexity - O(n)
// Space complexity - O(m), where m - power of input alphabet