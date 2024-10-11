class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size() - 1;
        int left = 0;
        int maxSum = 0;
        while (left < right) {
            int mini = min(height[left], height[right]) * (right- left);
            maxSum = max(mini, maxSum);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxSum;
    }
};