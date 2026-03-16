class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        char prev = '\0';
        for (char c : s) {
            switch (c) {
                case 'M':
                    result += 1000;
                    if (prev == 'C') {
                        result -= 200;
                    }
                    break;
                case 'D':
                    result += 500;
                    if (prev == 'C') {
                        result -= 200;
                    }
                    break;
                case 'C':
                    result += 100;
                    if (prev == 'X') {
                        result -= 20;
                    }                    
                    break;
                case 'L':
                    result += 50;
                    if (prev == 'X') {
                        result -= 20;
                    }
                    break;
                case 'X':
                    result += 10;
                    if (prev == 'I') {
                        result -= 2;
                    }
                    break;
                case 'V':
                    result += 5;
                    if (prev == 'I') {
                        result -= 2;
                    }
                    break;
                case 'I':
                    result += 1;
                default:
                    break;
            }
            prev = c;
        }
        return result;
    }
};