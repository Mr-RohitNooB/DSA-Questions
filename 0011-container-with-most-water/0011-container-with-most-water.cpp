class Solution {
public:
    int maxArea(vector<int>& height) {
        int right=height.size()-1;
        int left=0;
        int sumOfTheWalls=0;
        while(left<right){
            int minimum=min(height[left],height[right])*(right-left);
            sumOfTheWalls=max(sumOfTheWalls,minimum);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return sumOfTheWalls;
    }
};