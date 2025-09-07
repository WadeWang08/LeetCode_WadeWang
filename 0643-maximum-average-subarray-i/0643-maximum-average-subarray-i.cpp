class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxavg = 0;
        double temp = 0;
        for (size_t i = 0; i < k; i++) {
            maxavg += nums[i];
        }
        maxavg = maxavg / k;
        temp = maxavg;

        for (size_t j = k; j < nums.size(); j++) {
            temp = ((temp * k) - nums[j-k] + nums[j]) / k;
            std::cout << temp;
            if (temp > maxavg) {
                maxavg = temp;
            }
        }
        return maxavg;
    }
};