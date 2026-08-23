class Solution {
public:
    string removeStars(string s) {
        std::string s1;
        for(int i = 0; i < s.size(); i++) {
            if(!s1.empty() && isalpha(s1.back()) && s[i] == '*') {
                s1.pop_back();
            }
            else {
                s1.push_back(s[i]);
            }
        }
        return s1;
    }
};