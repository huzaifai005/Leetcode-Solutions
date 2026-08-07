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
                current = 0;
            }
            max = std::max(max, current);
        }
        return max;
    }
};