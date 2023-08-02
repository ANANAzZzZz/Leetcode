class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0;
        int r = s.size() - 1;

        while (l < r) {
            char tmp = s[r];
            s[r] = s[l];
            s[l] = tmp;
            
            r--;
            l++;
        }
    }
};

// Time complexity - O(n)
// Space complexity - O(1)