class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        int ret = INT_MAX;
        if(root == NULL) return 0;
        if(root->left != NULL) {
            TreeNode* temp = root->left;
            ret = min(ret, getMinimumDifference(temp));
            while(temp->right != NULL) {
                temp = temp->right;
            }
            ret = min(ret, root->val - temp->val);
        }
        if(root->right != NULL) {
            TreeNode* temp = root->right;
            ret = min(ret, getMinimumDifference(temp));
            while(temp->left != NULL) {
                temp = temp->left;
            }
            ret = min(ret, temp->val - root->val);
        }
        return ret;
    }
};