class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int result = 0;

        while ( l < r ) {
            result = max(result, min(height[l],height[r])*(r - l));
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return result;
    }
};