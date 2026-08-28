class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        std::vector<int> v1;
        for(int i = 0; i < asteroids.size(); i++) {
            if(!v1.empty() && v1.back() > 0 && asteroids[i] < 0) {
                while(!v1.empty() && v1.back() > 0 && asteroids[i] < 0) {
                    if(std::abs(asteroids[i]) > v1.back()) {
                        v1.pop_back();
                    }
                    else if(std::abs(asteroids[i]) == v1.back()) {
                        v1.pop_back();
                        asteroids[i] = 0;
                        break;
                    }
                    else {
                        asteroids[i] = 0;
                        break;
                    }
                }
                if(asteroids[i] != 0) {
                    v1.push_back(asteroids[i]);
                }
            }
            else {
                v1.push_back(asteroids[i]);
            }
        }
        return v1;
    }
};