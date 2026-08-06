class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int count = 0;
        int maxcount = 0;
        for(int i = 0; i < k; i++) {
            if(isVowel(s[i])) {
                count += 1;
            }
        }
        maxcount = count;
        for(int i = k; i < s.size(); i++) {
            if(isVowel(s[i - k])) {
                count -= 1;
            }
            if(isVowel(s[i])) {
                count += 1;
            }
            maxcount = std::max(maxcount, count);
        }
        return maxcount;
    }
};