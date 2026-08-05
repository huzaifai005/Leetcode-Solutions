class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0) {
            return true;
        }
        int j = 0;
        for(int i = 0; i < t.size(); i++) {
            if(j == s.size() - 1 && s[j] == t[i]) {
                return true;
            }
            else if(s[j] == t[i]) {
                j++;
            }
        }
        return false;
    }
};