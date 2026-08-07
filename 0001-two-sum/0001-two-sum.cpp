class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> notebook;
        int needed;
        for(int i = 0; i < nums.size(); i++) {
            needed = target - nums[i];
            if(notebook.count(needed)) {
                return {notebook[needed], i};
            }
            notebook[nums[i]] = i;
        }
        return {0, 0};
    }
};