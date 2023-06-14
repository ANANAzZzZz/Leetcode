class Solution {
public:
    bool isPalindrome(int x) {
        string strX = to_string(x);

        string reversedStrX = strX;
        reverse(reversedStrX.begin(), reversedStrX.end());

        if (strX == reversedStrX) {
            return true;
        }

        return false;
    }
};