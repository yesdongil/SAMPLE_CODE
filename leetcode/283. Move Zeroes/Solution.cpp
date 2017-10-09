class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++) {
            for(int j = i; j > 0 && nums[j - 1] == 0 ; j--) {
                swap(nums[j], nums[j - 1]);
            }
        }
    }
};