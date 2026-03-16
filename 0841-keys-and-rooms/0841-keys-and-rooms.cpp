class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), false);
        dfs(0, rooms, visited);

        for (bool room : visited) {
            if (!room) {
                return false;
            }
        }
        return true;
    }

    void dfs(int room, vector<vector<int>>& keymap, vector<bool>& record) {
        if (!record[room]) {
            record[room] = true;

            if (!keymap[room].empty()) {
                for (int keys : keymap[room]) {
                    dfs(keys, keymap, record);
                }
            }
        }
    }
};