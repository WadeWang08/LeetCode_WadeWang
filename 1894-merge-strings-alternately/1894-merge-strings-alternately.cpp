class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0, j = 0;
        int size_1 = word1.size(), size_2 = word2.size();

        while (i < size_1 || j < size_2) {
            if (i < size_1) {
                result += word1[i];
                i++;
            }
            if (j < size_2) {
                result += word2[j];
                j++;
            }
        }

        return result;
    }
};
