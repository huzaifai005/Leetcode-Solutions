class Solution {
public:
    string reversePrefix(string word, char ch) {
        int end = word.find(ch);
        if(end != -1) {
            reverse(word.begin(), word.begin() + end + 1);
        }
        return word;
    }
};