class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int slot = 0;
        int zero = 0;
        if(flowerbed[0] == 0) {
            zero++;
        }
        for(size_t i = 0; i < flowerbed.size(); i++) {
            if(flowerbed[i] == 0) {
                zero++;
            }
            else {
                if(zero != 0) {
                    slot = slot + ((zero - 1) / 2);
                    if(n <= slot) {
                        return true;
                    }
                    zero = 0;
                }
            }
        }
        if(zero != 0) {
            zero++;
            slot = slot + ((zero - 1) / 2);
        }
        return n <= slot;
    }
};
