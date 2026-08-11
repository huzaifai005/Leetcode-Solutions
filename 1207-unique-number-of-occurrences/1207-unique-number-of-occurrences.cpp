class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::unordered_map<int, int> map1;
        std::unordered_set<int> set1;
        for(int nums : arr) {
            map1[nums]++;
        }
        for(auto& pair : map1) {
            set1.insert(pair.second);
        }
        if(map1.size() == set1.size()) {
            return true;
        }
        return false;
    }
};