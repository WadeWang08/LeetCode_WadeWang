class Solution {
public:
    int climbStairs(int n) {
        int a = 1;
        int b = 2;
        if (n == 1) {return 1;}
        if (n == 2) {return 2;}

        for (int i = 3; i <= n; i++) {
            if (a < b) {
                a+= b;
            } else {
                b+= a;
            }
        }
        return max(a,b);
    }
};