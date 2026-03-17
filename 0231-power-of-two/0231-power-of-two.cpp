class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long power = 1;
        while (power != n) {
            if (power > n) {
                return false;
            }
            power *= 2;
        }
        return true;
    }
};