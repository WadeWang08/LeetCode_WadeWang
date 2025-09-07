class Solution {
public:

    bool isVowel(char a) {
        switch(a) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return true;
        }
        return false;
    }

    int maxVowels(string s, int k) {
        int maxVowels = 0;
        int currVowels = 0;

        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                currVowels++;
            }
        }
        maxVowels = currVowels;

        for (int j = k; j < s.size(); j++) {
            if (isVowel(s[j - k])) {
                currVowels--;
            }
            if(isVowel(s[j])) {
                currVowels++;
            }
            maxVowels = max(maxVowels, currVowels);
        }
        return maxVowels;
    }
};