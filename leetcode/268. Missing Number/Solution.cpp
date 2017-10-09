class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ret = 0, i;
        for(i = 0; i < nums.size(); i++) {
            ret += nums[i];
        }
        ret = (i*(i+1)/2) - ret;
        return ret;
    }
};