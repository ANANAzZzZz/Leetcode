class Solution {
public:
    double myPow(double x, int n) {
        long num =  fabs(n);

        if (n < 0) {
            x = 1 / x;
        }

        double pow = 1;
        while (num) {
            if (num & 1) {
                pow *= x;
            }

            x *= x;
            num >>= 1;
        }

        return pow;
    }
};

// Time complexity - O(log(n))
// Space complexity - O(1)