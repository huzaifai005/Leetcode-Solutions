class Solution {
public:
    string clearDigits(string s) {
        std::stack<char> stack1;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= '0' && s[i] <= '9') {
                if(stack1.empty()) {
                    continue;
                }
                else {
                    stack1.pop();
                }
            }
            else {
                stack1.push(s[i]);
            }
        }
        if(stack1.empty()) {
            return "";
        }
        int size = stack1.size();
        for(int i = 0; i < size; i++) {
            s[i] = stack1.top();
            stack1.pop();
        }
        s.resize(size);
        std::reverse(s.begin(), s.end());
        return s;
    }
};