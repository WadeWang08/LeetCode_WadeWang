class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        multiset<vector<int>> arr;
        int n = grid.size();
        int count = 0;
        for (auto& vec : grid) {
            arr.insert(vec);
        }

        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (auto& vec : grid) {
                temp.push_back(vec[i]);
            }
            count += arr.count(temp);
        }
        return count;
    }
};