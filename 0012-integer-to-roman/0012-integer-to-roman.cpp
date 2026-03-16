class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        int thousand = num / 1000;
        for (int i = 0; i < num/1000; i++) {
            result += "M";
        }
        num = num % 1000;

        int hundred = num / 100;
        switch(hundred) {
            case 9:
                result += "CM";
                break;
            case 8:
            case 7:
            case 6:
            case 5:
                result += "D";
                for (int i = 0; i < hundred - 5; i++) {
                    result += "C";
                }
                break;
            case 4:
                result += "CD";
                break;
            case 3:
            case 2:
            case 1:
                for (int i = 0; i < hundred; i++) {
                    result += "C";
                }
                break;
            default:
        }
        num = num % 100;


        int ten = num / 10;
        switch(ten) {
            case 9:
                result += "XC";
                break;
            case 8:
            case 7:
            case 6:
            case 5:
                result += "L";
                for (int i = 0; i < ten - 5; i++) {
                    result += "X";
                }
                break;
            case 4:
                result += "XL";
                break;
            case 3:
            case 2:
            case 1:
                for (int i = 0; i < ten; i++) {
                    result += "X";
                }
                break;
            default:
        }
        num = num % 10;

        switch(num) {
            case 9:
                result += "IX";
                break;
            case 8:
            case 7:
            case 6:
            case 5:
                result += "V";
                for (int i = 0; i < num - 5; i++) {
                    result += "I";
                }
                break;
            case 4:
                result += "IV";
                break;
            case 3:
            case 2:
            case 1:
                for (int i = 0; i < num; i++) {
                    result += "I";
                }
                break;
            default:
        }
    
    return result;
    }
};