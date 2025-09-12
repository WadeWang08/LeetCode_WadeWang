class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       
       int n = cost.size();
       vector<int> accucost(n);
       accucost[0] = cost[0];
       accucost[1] = cost[1];

       for(int i = 2; i < n; i++) {
            accucost[i] = cost[i] + min(accucost[i - 1], accucost[i - 2]);
        }

        return min(accucost[n - 1], accucost[n - 2]);
    }
};