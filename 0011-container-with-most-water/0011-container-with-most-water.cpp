class Solution {
public:
    int maxArea(vector<int>& height) {
        int j = 0;
        int i = height.size() - 1;
        int area = 0;
        while(j < i) {
            area = std::max((i - j)*std::min(height[i], height[j]), area);
            if(height[i] > height[j]) {
                j++;
            }
            else {
                i--;
            }
        }
        return area;
    }
};