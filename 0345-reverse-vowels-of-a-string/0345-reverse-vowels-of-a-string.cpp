class Solution {
public:

    int i = 0;
    int j = 0;

    void setlength(string s) {
        j = s.length();
    }

    bool IsVowel(char a) {
        switch (a) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                return true;
        }
        return false;
    }
        
    bool FindFront(string s) {
        while(i != s.size() && i != j) {
            if(IsVowel(s[i])) {
                return true;
            }
            i++;
        }
        return false;
    }
    
    bool FindLast(string s) {
        while(j != -1 && i != j) {
            if(IsVowel(s[j])) {
                return true;
            }
            j--;
        }
        return false;
    }


    string reverseVowels(string s) {

        setlength(s);
        string result = s;
        while(FindFront(s) && FindLast(s)) {
            result[i] = s[j];
            result[j] = s[i];
            i++;
            j--; 
        }
        return result;
    }
};