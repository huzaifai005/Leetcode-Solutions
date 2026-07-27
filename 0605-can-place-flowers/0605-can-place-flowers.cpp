class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int planted = 0;
        if(n == 0) {
            return true;
        }
        if(flowerbed.size() == 1 && flowerbed[0] == 0) {
            return true;
        }
        for(int i = 0; i < flowerbed.size() - 1; i++) {
            if(flowerbed[i] == 1) {
                continue;
            }
            if(i == 0) {
                if(flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                    flowerbed[i] = 1;
                    planted++;
                }
            }
            else if(flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                planted++;
            }
            else if(i == flowerbed.size() - 2 && flowerbed[i + 1] == 0) {
                flowerbed[i + 1] = 1;
                planted++;
            }
            if(planted == n) {
                return true;
            }
        }
        return false;
    }
};