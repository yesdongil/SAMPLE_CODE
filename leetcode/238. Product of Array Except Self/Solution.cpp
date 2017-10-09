class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        int product = 1;
        vector<int> temp(len, 1);
        for(int i = 1; i < len; i++) {
            temp[i] = temp[i - 1] * nums[i - 1];
        }
        for(int j = len - 1; j >= 0; j--) {
            temp[j] = temp[j] * product;
            product *= nums[j];
        }
        return temp;
    }
};