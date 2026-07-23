class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int power = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == candidate) {
                power += 1;
            }
            else if(power == 0) {
                candidate = nums[i];
                power += 1;
            }
            else {
                power -= 1;
            }
        }
        return candidate;
    }
};