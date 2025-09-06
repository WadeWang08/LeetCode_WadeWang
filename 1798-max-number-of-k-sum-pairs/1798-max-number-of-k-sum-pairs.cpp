class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.size() - 1;
        int counts = 0;
        int sum = 0;
        while (l < r) {
            sum = nums[l] + nums[r];
            if (sum == k) {
                counts ++;
                l++;
                r--;
            } else if (sum < k ) {
                l++;
            } else {
                r--;
            }
        }
        return counts;
    }
};