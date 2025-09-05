class Solution {
public:

    int FindMax(vector<int>& v) {
        if(v.empty()){
            return 0;
        }
        int max = v.at(0);
        for(size_t i = 1; i < v.size(); i++) {
            if(v.at(i) > max){
                max = v.at(i);
            }
        }
        return max;
    }

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int max = FindMax(candies);
        for(size_t i = 0; i < candies.size(); i++) {
            result.push_back(candies.at(i) + extraCandies >= max);
        }
        return result;
    }
};
