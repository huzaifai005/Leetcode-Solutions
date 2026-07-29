class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int final = 0;
        int highest = 0;
        for(int i = 0; i < gain.size(); i++) {
            final += gain[i];
            highest = max(highest, final);
        }
        return highest;
    }
};