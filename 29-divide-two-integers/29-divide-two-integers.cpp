class Solution {
public:
    int divide(int dividend, int divisor) {
        // a = 2^n * b + c
        // c = 2^m * b + d
        // ...
        // in this way we can get the multiplier of b
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        int sign = -1;
        if (dividend > 0 && divisor > 0 || dividend < 0 && divisor < 0) {
            sign = 1;
        }
        // considering -INT_MIN would be greater than INT_MAX
        long a = labs(dividend), b = labs(divisor);
        // since we will return sign*res, if we use int, and dividend = INT_MIN, divisor = 1, it will cause stack overflow
        long res = 0;
        while (a >= b) {
            long tempB = b;
            int multiplier = 1;
            while (tempB << 1 <= a) {
                tempB <<= 1;
                multiplier <<= 1;
            }
            a -= tempB;
            res += multiplier;
        }
        return sign * res;
    }
};