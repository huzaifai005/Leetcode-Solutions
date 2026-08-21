class Solution {
public:
    string removeDuplicates(string s) {
        std::stack<char> stack;
        std::string s1;
        for(int i = 0; i < s.size(); i++) {
            if(stack.empty()) {
                stack.push(s[i]);
            }
            else if(stack.top() == s[i]) {
                stack.pop();
            }
            else {
                stack.push(s[i]);
            }
        }
        while(!stack.empty()) {
            s1 = stack.top() + s1;
            stack.pop();
        }
        return s1;
    }
};