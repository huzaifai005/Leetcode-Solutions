class Solution {
public:
    string reversePrefix(string word, char ch) {
        int end = 0;
        for(int i = 0; i < word.size(); i++) {
            if(word[i] == ch) {
                end = i + 1;
                break;
            }
        }
        std::reverse(word.begin(), word.begin() + end);
        return word;
    }
};