class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int final = 0;
        int hi = 0;
        for(int i = 0; i < gain.size(); i++) {
            final += gain[i];
            hi = max(hi, final);
        }
        return hi;
    }
};