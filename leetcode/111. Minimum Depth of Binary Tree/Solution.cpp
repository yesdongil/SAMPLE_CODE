class Solution {
public:
    int minDepth(TreeNode* p, int d)
    {
        int ret = d;
        if(p != NULL) {
            ret++;
            int left_v = minDepth(p->left, ret);
            int right_v = minDepth(p->right, ret);
            if(left_v == ret) {
                ret = right_v;
            } else if(right_v == ret) {
                ret = left_v;
            } else {
                ret = min(left_v, right_v);
            }
        }
        return ret;
    }
    int minDepth(TreeNode* root) {
        return minDepth(root, 0);
    }
};