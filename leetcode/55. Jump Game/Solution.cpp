class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool ret = true;
        int start = nums.size() - 2, diff = 1;
        for(int i = start; i >= 0; i-- ) {
            if(nums[i] >= diff) {
                diff = 1;
            } else {
                diff++;
            }
        }
        if(diff > 1) {
            ret = false;
        }
        return ret;
    }
};