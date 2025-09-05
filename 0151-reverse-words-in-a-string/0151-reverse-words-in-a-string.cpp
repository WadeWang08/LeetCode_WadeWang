class Solution {
public:
    string reverseWords(string s) {
        int len = s.size();
        int count = 0;
        string result = "";
        for(int i = len-1; i >= 0; i--) {
            if(s[i] != ' ') {
                count++;
            } 
            if(s[i] == ' ' && count != 0) {
                result += s.substr(i+1, count);
                result += ' ';
                count = 0;
            }
        }
        if(count != 0){
            result += s.substr(0, count);
            result += ' ';
        }
        result.pop_back();
        return result;
    }
};