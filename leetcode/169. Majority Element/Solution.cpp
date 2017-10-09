class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ret, count = 0, test;
        sort(nums.begin(), nums.end());
        test = nums[0];
        ret = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(test == nums[i]) {
                count++;
                if(count >= (nums.size() / 2)) {
                    ret = test;
                    break;
                }
            } else {
               count = 0;
               test = nums[i];
            }
        }
        return ret;
    }
};