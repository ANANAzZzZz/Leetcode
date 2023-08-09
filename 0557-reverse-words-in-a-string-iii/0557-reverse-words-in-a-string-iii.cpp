class Solution {
public:
    string reverseWords(string s) {
        int l = 0;
        int r = 0;
        int n = s.length();
        
        for (int r = 0; l < n; r++) {
            if (s[r] == ' ' || r == n) {
                int nextWord = r + 1;
                r--;
                
                while (l <= r) {
                    char tmp = s[r];
                    s[r] = s[l];
                    s[l] = tmp;

                    l++;
                    r--;
                }

                l = nextWord;
                r = nextWord;
            }
        }

        return s;
    }
};

// Time complexity - O(n^2)
// Space complexity - O(1)