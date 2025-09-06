class Solution {
public:

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

    string reverseVowels(string s) {
        int n = s.size();
        int i = 0;
        int j = n - 1;
        char temp = 'a';

        while (i < j) {

            while ( i < n && !IsVowel(s[i])) {
                i++;
            }
            while ( j >= 0 && !IsVowel(s[j])) {
                j--;
            }
            // Prevent Additional Swap
            if (i >= j) {
                break;
            }
            // Swap now
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
        return s;
    }
};