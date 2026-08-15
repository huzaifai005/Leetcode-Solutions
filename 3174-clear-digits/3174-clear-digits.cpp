class Solution {
public:
    string clearDigits(string s) {
        std::string s2;
        for(int i = 0; i < s.size(); i++) {
            if(isdigit(s[i])) {
                if(!s2.empty()) {
                    s2.pop_back();
                }
            }
            else {
                s2.push_back(s[i]);
            }
        }
        return s2;
    }
};