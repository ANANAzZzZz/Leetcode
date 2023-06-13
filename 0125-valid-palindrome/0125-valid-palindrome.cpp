class Solution {
public:
    bool isPalindrome(string s) {
        string nonSymbolLine;
        string reversedS;
     
        for (int i = 0; i < s.length(); i++) {
              s[i] = tolower(s[i]);

              if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                  nonSymbolLine.push_back(s[i]);
              }
        } 

        reversedS = nonSymbolLine;
        reverse(reversedS.begin(), reversedS.end());
        
        if (nonSymbolLine == reversedS) {
            return true;
        } else {
            return false;
        }
    }
};

// Time complexity:O(n)
// Space complexity:O(1)