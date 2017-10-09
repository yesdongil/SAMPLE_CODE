class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int ret = 0;
        TreeNode* node;
        if(root != NULL) {
            node = root->left;
            if(node != NULL) {
                if((node->left == NULL) && (node->right == NULL)) {
                    ret += node->val;
                } else {
                    ret += sumOfLeftLeaves(node);
                }
            }
            node = root->right;
            if(node != NULL) {
                ret += sumOfLeftLeaves(node);
            }
        }
        return ret;
    }
};