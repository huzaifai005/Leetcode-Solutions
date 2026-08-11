class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        std::unordered_map<int, int> map1;
        for(int num : nums) {
            map1[num]++;
        }
        for(int num : nums) {
            if(num%2 == 0 && map1[num] == 1) {
                return num;
            }
        }
        return -1;
    }
};