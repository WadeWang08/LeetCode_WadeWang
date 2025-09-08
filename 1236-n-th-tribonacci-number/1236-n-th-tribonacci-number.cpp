class Solution {
public:
    int tribonacci(int n) {

        switch (n) {
            case 0:
                return 0;
            case 1:
            case 2:
                return 1;
        }


        int a = 0;
        int b = 1;
        int c = 1;

        for (int i = 1; i < n/3; i++) {
            a+= b + c;
            b+= a + c;
            c+= a + b;
        }

        switch (n % 3) {
            case 0: 
                a += b + c;
                return a;
            case 1:
                a += b + c;
                b += a + c;
                return b;
            case 2:
                a += b + c;
                b += a + c;
                c += a + b;
                return c;
        }
        return 0;
    }
};