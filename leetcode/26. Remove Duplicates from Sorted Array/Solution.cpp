class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ret = 0, bkup;
        if(nums.size() > 0) {
            bkup = nums[0];
            ret = 1;
            for(auto itr = nums.begin() + 1; itr != nums.end();) {
                if(bkup != *itr) {
                    ret++;
                    bkup = *itr;
                    itr++;
                } else {
                    itr = nums.erase(itr);
                }
            }
        }
        return ret;
    }
};