class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int j = 0;
        vector<int> indices;
        for(int i = j + 1; i < nums.size(); i++) {
            if(nums[i] + nums[j] == target) {
                indices.push_back(j);
                indices.push_back(i);
                return indices;
            }
            if(i == nums.size() - 1 && j < nums.size() - 1) {
                i = j + 1;
                j++;
            }
        }
        indices.push_back(0);
        indices.push_back(0);
        return indices;
    }
};