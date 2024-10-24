class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int>vec(nums.size(),0);
        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
            vec[i]=sum;
        }
        return vec;
    }
};