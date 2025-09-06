class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        result.front() = 1;
        for(int i = 1; i < nums.size(); i++) {
            result[i] = nums[i-1] * result[i-1];
            }
        int suffix = 1;
        for(int i = nums.size() - 2; i >= 0; i--) {
            suffix = suffix * nums[i+1];
            result[i] = result[i] * suffix;
        }
        return result;
    }
};