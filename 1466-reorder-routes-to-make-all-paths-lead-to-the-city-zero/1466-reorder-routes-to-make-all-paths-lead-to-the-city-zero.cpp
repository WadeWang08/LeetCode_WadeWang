class Solution {
public:
    int reorder = 0;

    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int, int>>> graph(n);

        for (vector<int>& road : connections) {
            int a = road[0];
            int b = road[1];

            graph[a].push_back({b, 1});
            graph[b].push_back({a, 0});
        }

        vector<bool> visited(n, false);
        dfs(0, graph, visited);
        return reorder;
    }

    void dfs(int city, vector<vector<pair<int, int>>>& graph, vector<bool>& visited) {
        visited[city] = true;

        for (pair<int, int> nei : graph[city]) {
            int next_city = nei.first;
            int need_reverse = nei.second;

            if (!visited[next_city]) {
                reorder += need_reverse;
                dfs(next_city, graph, visited);
            }
        }
    }
};