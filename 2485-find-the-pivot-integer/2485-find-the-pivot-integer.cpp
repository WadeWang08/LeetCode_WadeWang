class Solution {
public:
    int pivotInteger(int n) {
        int sum = (1 + n)* n / 2;
        int sq = sqrt(sum);
        if (sq * sq == sum) {
            return sq;
        }
        return -1;
    }
};