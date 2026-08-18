class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        std::queue<int> queue;
        int temp = 0;
        int count = students.size();
        int rej = 0;
        std::reverse(sandwiches.begin(), sandwiches.end());
        for(int num : students) {
            queue.push(num);
        }
        while(!sandwiches.empty()) {
            if(queue.front() == sandwiches.back()) {
                queue.pop();
                sandwiches.pop_back();
                rej = 0;
                count--;
            }
            else {
                temp = queue.front();
                queue.pop();
                queue.push(temp);
                rej++;
                if(rej == count) {
                    break;
                }
            }
        }
        return queue.size();
    }
};