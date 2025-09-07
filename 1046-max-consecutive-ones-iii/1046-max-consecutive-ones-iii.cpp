class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxOnes = 0;
        int currOnes = 0;
        int start = 0;
        int zeros = 0;
        int position = 0;

        while (zeros != k) {
            if(nums[position] != 0) {
                position++;
            } else {
                zeros++;
                position++;
            }
            if(position == nums.size()) {
                return nums.size();
            }
        }
        currOnes = position;
        maxOnes = currOnes;


        for (int i = position; i < nums.size(); i++) {
            if (nums[i] == 0) {
                currOnes++;
                while (nums[start] != 0) {
                    start++;
                    currOnes--;
                }
                start++;
                currOnes--;
                //std::cout << "Iteration " << i << ". Start at " << start << ". currvalue is " << currOnes << "\n" ;
                maxOnes = max(maxOnes, currOnes);
            } else {
                currOnes++;
            }
            maxOnes = max(maxOnes, currOnes);
        }
        return maxOnes;
    }
};