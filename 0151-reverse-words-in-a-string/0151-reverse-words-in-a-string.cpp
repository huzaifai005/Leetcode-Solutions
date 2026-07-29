class Solution {
public:
    string reverseWords(string s) {
        int j = 0;
        int start = 0;
        std::reverse(s.begin(), s.end());
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != ' ') {
                if(j == 0) {
                    start = j;
                }
                else {
                    s[j] = ' ';
                    j++;
                    start = j;
                }
                while(i < s.size() && s[i] != ' ') {
                    s[j] = s[i];
                    i++;
                    j++;
                }
                std::reverse(s.begin() + start, s.begin() + j);
            }     
        }
        s.resize(j);
        return s;
    }
};