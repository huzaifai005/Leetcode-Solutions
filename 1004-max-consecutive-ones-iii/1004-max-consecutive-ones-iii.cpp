class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j = 0;
        int window = 0;
        int zero = k;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                if(zero != 0) {
                    zero--;
                }
                else {
                    while(nums[j] == 1) {
                        j++;
                    }
                    j++;
                }
            }
            window = std::max(window, i - j + 1);
        }
        return window;
    }
};