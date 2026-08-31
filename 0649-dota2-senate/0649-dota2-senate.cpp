class Solution {
public:
    string predictPartyVictory(string senate) {
        std::queue<int> radiant;
        std::queue<int> dire;
        for(int i = 0; i < senate.size(); i++) {
            if(senate[i] == 'R') {
                radiant.push(i);
            }
            else {
                dire.push(i);
            }
        }
        while(!radiant.empty() && !dire.empty()) {
            if(radiant.front() < dire.front()) {
                dire.pop();
                radiant.push(radiant.front() + senate.size());
                radiant.pop();
            }
            else {
                radiant.pop();
                dire.push(dire.front() + senate.size());
                dire.pop();
            }
        }
        if(!radiant.empty()) {
            return "Radiant";
        }
        else {
            return "Dire";
        }
    }
};