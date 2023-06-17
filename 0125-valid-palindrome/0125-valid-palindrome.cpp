// two pointer solution

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            s[i] = tolower(s[i]);
            s[j] = tolower(s[j]);

            if (isValidSymbol(s[i])) {
                if (isValidSymbol(s[j])) {
                    if (s[i] == s[j]) {
                        i++;
                        j--;
                        } else {
                        return false;
                    }
                } else {
                    j--;
                }
            } else {
            i++;
            }
        }
        return true;
    }
    bool isValidSymbol (char symbol) {
        if ((symbol >= 'a' && symbol <= 'z') || (symbol >= '0' && symbol <= '9')) {
            return true;
        }
        return false;
    }
};

// Time complexity:O(n)
// Space complexity:O(1)