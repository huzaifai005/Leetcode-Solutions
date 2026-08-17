class Solution {
public:
    int minLength(string s) {
        std::stack<char> stack;
        for(int i = 0; i < s.size(); i++) {
            if(stack.empty()) {
                stack.push(s[i]);
            }
            else if(s[i] == 'B' && stack.top() == 'A') {
                stack.pop();
            }
            else if(s[i] == 'D' && stack.top() == 'C') {
                stack.pop();
            }
            else {
                stack.push(s[i]);
            }
        }
        return stack.size();
    }
};