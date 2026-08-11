class Solution {
public:
    int digitFrequencyScore(int n) {
        std::unordered_map<int,int> map1;
        int total = 0;
        while(n > 0) {
            map1[n%10]++;
            n = n/10;
        }
        for(auto& pair : map1) {
            total += pair.first*pair.second;
        }
        return total;
    }
};