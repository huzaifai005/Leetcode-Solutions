class Solution {
public:
    string decodeString(string s) {
        std::stack<int> stack;
        std::stack<string> stack2;
        int num = 0;
        std::string s1;
        for(int i = 0; i < s.size(); i++) {
            if(isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            else if(isalpha(s[i])) {
                s1.push_back(s[i]);
            }
            else if(s[i] == '[') {
                stack.push(num);
                stack2.push(s1);
                num = 0;
                s1 = "";
            }
            else if(s[i] == ']') {
                int k = 0;
                std::string temp;
                std::string temp2;
                k = stack.top();
                stack.pop();
                while(k != 0) {
                    temp += s1;
                    k--;
                }
                temp2 = stack2.top();
                stack2.pop();
                s1 = temp2 + temp;
            }
        }
        return s1;
    }
};