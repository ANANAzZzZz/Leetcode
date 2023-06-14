class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> xDigits;

        if (x < 0) {
            return false;
        }
 
        while (x > 0) {
            xDigits.push_back(x % 10);
            x /= 10;
        }

        vector<int> reversedXDigits = xDigits;
        reverse(reversedXDigits.begin(), reversedXDigits.end());

        if (reversedXDigits == xDigits) {
            return true;
        }

        return false;
    }
};

// Time complexity:O(n)
// Space complexity:O(1)