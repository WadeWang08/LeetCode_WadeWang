class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        for (int a : asteroids) {
            if (result.empty()) {
                result.push_back(a);
                continue;
            }
            if (result.back() > 0 && a < 0) {
                int last = result.back();
                int abs_a = a * (-1);
                while (abs_a > last) {
                    result.pop_back();
                    if (result.empty()) {
                        result.push_back(a);
                        abs_a = 0;
                        break;
                    }
                    last = result.back();
                    if(last < 0) {
                        result.push_back(a);
                        break;
                    }
                }
                if (abs_a == last) {
                    result.pop_back();
                }
            } else {
                result.push_back(a);
            }
        }
        return result;
    }
};