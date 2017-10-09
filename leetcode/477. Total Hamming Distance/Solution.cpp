class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ret = 0, len = nums.size();
        for(int i = 0; i < 32; i++) {
            int temp = (1 << i);
            int k = 0;
            for(int j = 0; j < len; j++) {
                if( (nums[j] & temp) != 0 ) {
                    k++;
                }
            }
            ret += k*(len - k);
        }
        return ret;
    }
};