class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int j = 0;
        int window = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                if(count != 1) {
                    count++;
                }
                else {
                    while(nums[j] == 1) {
                        j++;
                    }
                    j++;
                }
            }
            window = std::max(window, i - j);
        }
        return window;
    }
};