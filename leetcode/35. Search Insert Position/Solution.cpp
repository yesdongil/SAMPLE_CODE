class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ret = 0;
        for(; ret < nums.size() && (target > nums[ret]); ret++) {
            ;
        }
        return ret;
    }
};