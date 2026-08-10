class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_set<int> set1(nums1.begin(), nums1.end());
        std::unordered_set<int> set2(nums2.begin(), nums2.end());
        std::vector<int> final1;
        std::vector<int> final2;

        for(int nums : set1) {
            if(set2.count(nums) == false) {
                final1.push_back(nums);
            }
        }
        for(int nums : set2) {
            if(set1.count(nums) == false) {
                final2.push_back(nums);
            }
        }    
        return {{final1}, {final2}};
    }
};