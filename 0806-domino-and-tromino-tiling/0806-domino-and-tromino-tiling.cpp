class Solution {
public:
    int numTilings(int n) {
        
        vector<int> dp(max(3,n));

        // Base case:
        dp[0] = 1;
        dp[1] = 2;
        dp[2] = 5;
        
        if (n < 4) {
            return dp[n - 1];
        }

        for (int i = 3; i < n; i++) {
            dp[i] = (((dp[i - 1] * 2) % 1000000007) + dp[i - 3]) % 1000000007;
        }

        return dp[n - 1];


        // return modulo: ans % 1e9 + 7;
    }
};