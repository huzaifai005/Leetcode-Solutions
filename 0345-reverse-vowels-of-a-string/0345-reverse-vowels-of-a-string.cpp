class Solution {
public:
    string reverseVowels(string s) {
        int j = s.size() - 1;
        for(int i = 0; i < s.size(); i++) {
            if(j <= i) {
                return s;
            }
            while(s[j] != 'a' && s[j] != 'A' && s[j] != 'e' && s[j] != 'E' && s[j] != 'i' && s[j] != 'I' && s[j] != 'o' && s[j] != 'O' && s[j] != 'u' && s[j] != 'U') {
                j--;
                if(j == 0) {
                    return s;
                }
            }
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') {
                std::swap(s[i], s[j]);
                j--;
            }
        }
        return s;
    }
};