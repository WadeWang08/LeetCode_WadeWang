class Solution {
public:
    bool closeStrings(string word1, string word2) {
        // Check if srings are the same length otherwise false
        if (word1.size() != word2.size()) {
            return false;
        }
        // Create frequency maps
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for (char c : word1) {
            mp1[c]++;
        }
        for (char c: word2) {
            mp2[c]++;
        }

        // Check set of char
        string smp1 = "";
        multiset<int> set1;
        multiset<int> set2;
        for (auto& [key, value] : mp1) {
            smp1 += key;
            set1.insert(value);
        }
        for (auto& [key, value] : mp2) {           
            if (smp1.find(key) == string::npos) {
                return false;
            }
            set2.insert(value);
        }

        // // Check frequency
        // multiset<int> set1;
        // multiset<int> set2;
        // for (auto& [key, value] : mp1) {
        //     set1.insert(value);
        // }
        // for (auto& [key, value] : mp2) {
        //     set2.insert(value);
        // }

        return set1 == set2;
    }
};