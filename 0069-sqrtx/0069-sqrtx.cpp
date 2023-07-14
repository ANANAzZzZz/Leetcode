class Solution {
public:
    int mySqrt(int x) {
        long int num = 0;

        while (num * num <= x) {
            num += 1;
        }

        if (num * num != x) {
            num -= 1;
        }  

        return num;
    }
};

// Space complexity - O(n);
// Time complexity - O(n);