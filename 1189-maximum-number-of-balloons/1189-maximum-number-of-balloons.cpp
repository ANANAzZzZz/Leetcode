class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> count;

        for (int i = 0; i < text.size(); i++) {
            if (text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n')
                count[text[i]]++;
        }

        if (
            !count.count('b') ||
            !count.count('a') ||
            !count.count('l') / 2 ||
            !count.count('o') / 2 ||
            !count.count('n')
            ) {
                return 0;
         }

        return min({count['n'], count['a'], count['b'], count['l'] / 2, count['o'] / 2});
    }
};

// Time complexity - O(n)
// Space complexity - O(m), where m - power of input alphabet