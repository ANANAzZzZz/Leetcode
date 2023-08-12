class Solution {
public:
    string reversePrefix(string word, char ch) {
        for (int l = 0, r = 0; r < word.size(); r++) {
            if (word[r] == ch) {
                while (l < r) {
                    swap(word[l], word[r]);
                    l++;
                    r--;
                }
                break;
            }
        }
        return word;
    }
};

// Time complexity - O(n)
// Space complexity - O(1)