class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        std::vector<bool> greatest(candies.size(), false);
        int current = 0;
        int maxNumber = *std::max_element(candies.begin(), candies.end());
        for(int i = 0; i < candies.size(); i++) {
            current = candies[i] + extraCandies;
            if(current >= maxNumber) {
                greatest[i] = true;
            }
        }
        return greatest;
    }
};