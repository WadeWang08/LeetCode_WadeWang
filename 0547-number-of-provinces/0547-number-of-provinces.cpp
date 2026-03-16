class Solution {
public:
    int province = 1;

    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> province_map (isConnected.size(), 0);
        for (int i = 0; i < province_map.size(); i++) {
            if (province_map[i] == 0) {
                dfs(i, isConnected, province_map);
                province++;
            }
        }
        return province - 1;
    }

    void dfs(int city, vector<vector<int>>& connection, vector<int>& record) {
        if (record[city] != province) {
            record[city] = province;

            for (int j = 0; j < connection[city].size(); j++) {
                if (connection[city][j] == 1 && record[j] != province) {
                    dfs(j, connection, record);
                }
            }
        }
    }
};