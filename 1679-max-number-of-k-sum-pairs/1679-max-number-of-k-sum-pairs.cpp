class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        std::unordered_map<int, int> notebook;
        int ops = 0;
        int needed = 0;
        for(int i = 0; i < nums.size(); i++) {
            needed = k - nums[i];
            if(notebook[needed] > 0) {
                ops++;
                notebook[needed]--;
            }
            else {
                notebook[nums[i]]++;
            }
        }
        return ops;
    }
};