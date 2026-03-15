class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        if (numRows == 1) {
            result = {{1}};
            return result;
        }
        result = {{1}, {1,1}};
        if (numRows == 2) {
            return result;
        }
        vector<int> last = {1,1};
        for (int i = 0; i < numRows - 2; i++) {
            vector<int> curr = {1};
            for (int j = 0; j < last.size() - 1; j++) {
                curr.push_back(last[j] + last[j+1]);
            }
            curr.push_back(1);
            result.push_back(curr);
            last = curr;
        }
        return result;
    }
};