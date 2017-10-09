class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > ret;
        vector<int> temp(3);
        int len = nums.size();
        if(len < 3) return ret;
        sort(nums.begin(), nums.end());
        int bkup = nums[0] - 1;

        for(int i = 0; i < len - 2; i++) {
            if(bkup != nums[i]) {
                int bkup1 = nums[i] - 1;
                for(int j = i+1; j < len - 1; j++) {
                    if(bkup1 != nums[j]) {
                        int last = -(nums[i] + nums[j]);
                        if(binary_search(nums.begin() + j + 1, nums.end(), last) == true) {
                            temp[0] = nums[i];
                            temp[1] = nums[j];
                            temp[2] = last;
                            ret.push_back(temp);
                        }
                    }
                    bkup1 = nums[j];
                }
            }
            bkup = nums[i];
        }
        return ret;
    }
};