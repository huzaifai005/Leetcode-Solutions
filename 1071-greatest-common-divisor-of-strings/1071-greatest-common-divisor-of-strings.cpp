class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1) {
            return "";
        }
        int a = std::gcd(str1.size(), str2.size());
        std::string final = str1.substr(0, a);
        return final;
    }
};