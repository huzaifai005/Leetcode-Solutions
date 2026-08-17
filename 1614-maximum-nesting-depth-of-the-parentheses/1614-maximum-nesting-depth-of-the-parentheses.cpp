class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int maxdepth = 0;
        for(char c : s) {
            if(c == '(') {
                depth++;
            }
            else if(c == ')') {
                depth--;
            }
            maxdepth = std::max(maxdepth, depth);
        }
        return maxdepth;
    }
};