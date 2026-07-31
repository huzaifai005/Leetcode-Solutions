class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> final(nums.size());
        final[0] = 1;
        int right = 1;
        for(int i = 1; i < nums.size(); i++) {
            final[i] = final[i - 1] * nums[i - 1];
        }
        for(int i = nums.size() - 1; i >= 0; i--) {
            final[i] *= right;
            right *= nums[i];
        }
        return final;
    }
};