class Solution {
public:
    int compress(vector<char>& chars) {
        int j = 0;
        int count = 0;
        
        for (int i = 0; i < chars.size(); i++) {
            count++; 
            if (i == chars.size() - 1 || chars[i] != chars[i + 1]) {
                chars[j] = chars[i]; 
                j++;
                if (count > 1) {
                    std::string str = std::to_string(count);
                    for (char c : str) {
                        chars[j] = c;
                        j++;
                    }
                }
                count = 0;
            }
        }
        return j;
    }
};