class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int right = -1;
        int ans = 0;
        bool contain_zero = false;

        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                right++;
            }
            if(nums[i] == 0) {
                while(contain_zero == true) {
                    if(nums[left] == 0) {
                        contain_zero = false;
                    }
                    left++;
                }
                contain_zero = true;
                right++;
            }
            ans = max(ans, right - left);
        }
        if (!contain_zero) {
            return nums.size() - 1;
        }
        return ans;
    }
};