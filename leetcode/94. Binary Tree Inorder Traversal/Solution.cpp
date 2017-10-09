class Solution {
public:
    void solve(vector<int>& v, TreeNode* root) {
        if(root == NULL) return;
        if(root->left != NULL) {
            solve(v, root->left);
        }
        v.push_back(root->val);
        if(root->right != NULL) {
            solve(v, root->right);
        }
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        solve(ret, root);
        return ret;
    }
};