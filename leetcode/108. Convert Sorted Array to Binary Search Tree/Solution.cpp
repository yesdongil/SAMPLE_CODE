class Solution {
public:
    TreeNode* solve(vector<int>& nums, int start, int size) {
        if(size == 0) return NULL;
        if(size == 1) return new TreeNode(nums[start]);
        int mid = start + (size - 1)/2;
        TreeNode* ret = new TreeNode(nums[mid]);
        ret->left = solve(nums, start, mid - start);
        ret->right = solve(nums, mid + 1, size - mid + start - 1);
        return ret;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(nums, 0, nums.size());
    }
};