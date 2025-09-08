class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int pos = 0;
        for (int i = 1; i < nums.size() ; i++) {
            right += nums[i];
        }

        while (left != right) {
            if (pos == nums.size() - 1) {
                return -1;
            }
            left += nums[pos];
            right -= nums[pos + 1];
            pos++;
        }
        return pos;
    }
};