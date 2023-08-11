class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.size();
        int l = 0;
        int r = n - 1;

        while (l < r) {
            if (isLetter(s[l])) {
                if (isLetter(s[r])) {
                    char tmp = s[r];
                    s[r] = s[l];
                    s[l] = tmp;
                    
                    l++;
                    r--;
                } else {
                    r--;
                }
            } else {
                l++;
            }
        }

        return s;
    }

    bool isLetter(char letter) {        
        return letter >= 'a' &&  letter <= 'z' || letter >= 'A' &&  letter <= 'Z';
    }
};

// Time complexity - O(n)
// Space complexity - O(1)