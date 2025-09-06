class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros = 0;
        int temp = 0;
        int length = nums.size();
        for (int i = 0; i < length; i++) {
            if (nums[0] != 0) {
                temp = nums[0];
                nums.erase(nums.begin());
                nums.push_back(temp);
            } else {
                nums.erase(nums.begin());
                zeros++;
            }
        }
        for (int i = 0; i < zeros; i++) {
            nums.push_back(0);
        }
    }
};