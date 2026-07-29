class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int f = 0;
        int h = 0;
        for(int i = 0; i < gain.size(); i++) {
            f += gain[i];
            h = max(h, f);
        }
        return h;
    }
};