class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int final = 0;
        int a = 0;
        for(int i = 0; i < gain.size(); i++) {
            final += gain[i];
            a = max(a, final);
        }
        return a;
    }
};