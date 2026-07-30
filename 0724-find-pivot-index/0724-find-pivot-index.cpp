class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        std::vector<int> left(nums.size());
        std::vector<int> right(nums.size());
        if(nums.size() == 1) {
            return 0;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(i == 0) {
                left[i] = nums[i];
            }
            else {
                left[i] = left[i - 1] + nums[i];
            }
        }
        for(int i = nums.size() - 1; i >= 0; i--) {
            if(i == nums.size() - 1) {
                right[i] = nums[i];
            }
            else {
                right[i] = right[i + 1] + nums[i];
            }
        }
        for(int k = 0; k < nums.size(); k++) {
            if(k == 0) {
                if(right[k + 1] == 0) {
                    return k;
                }
            }            
            else if(k == nums.size() - 1) {
                if(left[k - 1] == 0) {
                    return k;
                }
            }    
            else if(left[k - 1] == right[k + 1]) {
                return k;
            }
        }
        return -1;
    }
};