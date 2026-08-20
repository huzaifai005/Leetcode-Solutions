class Solution {
public:
    string makeGood(string s) {
        std::stack<char> stack;
        std::string s1;
        for(int i = 0; i < s.size(); i++) {
            if(stack.empty()) {
                stack.push(s[i]);
            }
            else if(isupper(s[i]) && islower(stack.top()) && s[i] == toupper(stack.top()) || islower(s[i]) && isupper(stack.top()) && s[i] == tolower(stack.top())) {
                stack.pop();
            }
            else {
                stack.push(s[i]);
            }
        }
        int size = stack.size();
        for(int i = 0; i < size; i++) {
            s1.push_back(stack.top());
            stack.pop();
        }
        std::reverse(s1.begin(), s1.end());
        return s1;
    }
};
    