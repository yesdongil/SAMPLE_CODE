class Solution {
public:
    int solve(vector<int>& nums, int start, int end) {
        int mid = (start + end) / 2;
        if((end - start) == 2) {
            if(nums[mid] == nums[start]) {
                return nums[end];
            } else {
                return nums[start];
            }
        } else {
            if(nums[mid] == nums[mid+1]) {
                if( ((end - mid) & 0x1) == 0 ) {
                    start = mid + 2;
                } else {
                    end = mid - 1;
                }

            } else if(nums[mid] == nums[mid-1]) {
                if( ((end - mid) & 0x1) != 0 ) {
                    start = mid + 1;
                } else {
                    end = mid - 2;
                }
            } else {
                return nums[mid];
            }
            return solve(nums, start, end);            
        }
    }
    int singleNonDuplicate(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1);
    }
};