class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ret;
        int len = nums.size();
        uint64_t mask = (1 << len);
        vector<int> temp;
        
        for(uint64_t i = 0; i < mask; i++) {
            temp.clear();
            for(int j = 0; j < len; j++) {
                if( (i & (1 << j)) != 0) {
                    temp.push_back(nums[j]);
                }
            }
            ret.push_back(temp);
        }
        return ret;
    }
};