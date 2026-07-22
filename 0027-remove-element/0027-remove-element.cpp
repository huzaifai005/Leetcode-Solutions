class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int numsSize = nums.size();
        int count = numsSize;
        int j = 0;
        for(int i = 0; i < numsSize; i++) {
            if(nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};