class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double window = 0;
        double average = 0;
        if(nums.size() == 1) {
            return nums[0];
        }
        for(int i = 0; i < k; i++) {
            window += nums[i];
        }
        average = window/k;
        for(int i = k; i < nums.size(); i++) {
            window = window - nums[i - k] + nums[i];
            average = std::max(average, window/k);
        }
        return average;
    }
};