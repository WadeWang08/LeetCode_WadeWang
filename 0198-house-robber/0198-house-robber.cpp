class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 2);

        // Base case:
        dp[0] = 0;
        dp[1] = 0;
        dp[2] = nums[0];

        // Recurrence:
        for (int i = 3; i < n + 2; i++) {
            dp[i] = max( dp[i - 2] + nums[i - 2], dp[i - 3] + nums[i - 3] );
        }

        return dp [n + 1];
    }
};