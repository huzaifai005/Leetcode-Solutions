class Solution {
public:
    int minLength(string s) {
        std::string s1;
        for(int i = 0; i < s.size(); i++) {
            if(s1.empty()) {
                s1.push_back(s[i]);
            }
            else if(s[i] == 'B' && s1.back() == 'A') {
                s1.pop_back();
            }
            else if(s[i] == 'D' && s1.back() == 'C') {
                s1.pop_back();
            }
            else {
                s1.push_back(s[i]);
            }
        }
        return s1.size();
    }
};