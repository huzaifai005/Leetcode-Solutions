class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string final;
        int j = 0;
        int k = 0;
        for(int i = 0; i < word1.size() + word2.size(); i++) {
            if(j == word1.size()) {
                final.push_back(word2[k]);
                k++;
            }
            else if(k == word2.size()) {
                final.push_back(word1[j]);
                j++;
            }
            else if(i%2 == 0) {
                final.push_back(word1[j]);
                j++;
            }
            else if(i%2 == 1) {
                final.push_back(word2[k]);
                k++;
            }
        }
        return final;
    }
};