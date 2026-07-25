class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() == 1) {
            return true;
        }
        int goal = nums.size() - 1;
        for(int i = nums.size() - 2; i >= 0; i--) {
            if(nums[i] >= goal - i) {
                goal = i;
            }
            if(goal == 0) {
                return true;
            }            
        }
        return false;
    }
};