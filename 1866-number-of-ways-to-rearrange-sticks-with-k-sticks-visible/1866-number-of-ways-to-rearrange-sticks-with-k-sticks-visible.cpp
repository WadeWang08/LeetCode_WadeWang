
class Solution {
public:
    int rearrangeSticks(int n, int k) {
        const int mod = 1000000007;

        vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, 0));
        dp[1][1] = 1;
        
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= min(i, k); j++) {
                dp[i][j] = (dp[i - 1][j - 1] + (i - 1) * dp[i - 1][j]) % mod;
            }
        }
        return dp[n][k];
    }
};