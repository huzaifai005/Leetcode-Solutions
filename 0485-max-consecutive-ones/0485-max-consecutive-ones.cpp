class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current = 0;
        int max = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                current++;
            }
            else {
                if(current > max) {
                    max = current;
                }
                current = 0;
            }
        }
        if(current > max) {
            max = current;
        }
        return max;
    }
};