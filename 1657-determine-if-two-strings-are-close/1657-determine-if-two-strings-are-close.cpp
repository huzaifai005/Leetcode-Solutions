class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) {
            return 0;
        }
        std::set<char> set1(word1.begin(), word1.end());
        std::set<char> set2(word2.begin(), word2.end());
        if(set1 != set2) {
            return 0;
        }
        std::unordered_map<char, int> map1;
        std::unordered_map<char, int> map2;
        for(int i = 0; i < word1.size(); i++) {
            map1[word1[i]]++;
            map2[word2[i]]++;
        }
        std::vector<int> v1;
        std::vector<int> v2;
        for(auto& pair : map1) {
            v1.push_back(pair.second);
        }
        for(auto& pair : map2) {
            v2.push_back(pair.second);
        }
        std::sort(v1.begin(), v1.end());
        std::sort(v2.begin(), v2.end());
        if(v1 != v2) {
            return 0;
        }
        return 1;
    }
};