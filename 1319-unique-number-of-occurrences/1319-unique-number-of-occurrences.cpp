class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        for (int i : arr) {
            mp[i]++; 
        }
        unordered_set<int> seen;
        for (auto& [key, value] : mp) {
            if (seen.count(value)) {
                return false;
            } else {
                seen.insert(value);
            }
        }
        return true;
    }
};