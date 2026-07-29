class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        std::vector<int> final(gain.size());
        int highest = 0;
        for(int i = 0; i < gain.size(); i++) {
            if(i == 0) {
                final[i] = gain[i];
            }
            else {
                final[i] = final[i - 1] + gain[i];
            }
            if(final[i] > highest) {
                highest = final[i];
            }
        }
        return highest;
    }
};