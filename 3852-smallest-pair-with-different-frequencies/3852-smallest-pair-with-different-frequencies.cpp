class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::unordered_map<int, int> map1;
        for(int num : nums) {
            map1[num]++;
        }
        for(int i = 0; i < nums.size() - 1; i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] < nums[j] || nums[j] < nums[i]) {
                    if(map1[nums[i]] != map1[nums[j]]) {
                        return {std::min(nums[i], nums[j]), std::max(nums[i], nums[j])};
                    }
                }
            }
        }
        return {-1, -1};
    }
};