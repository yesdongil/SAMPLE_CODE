class Solution {
public:
    int maxDepth(TreeNode* root) {
        int ret = 0;
        if(root != NULL) {
            if(root->left != NULL) {
                ret = maxDepth(root->left);
            }
            if(root->right != NULL) {
                ret = max(ret, maxDepth(root->right));
            }
            ret++;
        }
        return ret;
    }
};