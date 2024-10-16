class Solution {
public:
    bool isHappy(int n) {
        set<int> happyNum;
        int nums =n;
        while (1) {
            
            nums=squareSum(nums);
            if (nums == 1) {
                return true;
            }

            else if (happyNum.find(nums) != happyNum.end()) {
                return false;
            }
            happyNum.insert(nums);
        }
    }
    int squareSum(int n) {
        int sum = 0;
        while (n) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }
};