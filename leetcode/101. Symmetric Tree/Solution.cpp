class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        bool ret = true;
        queue<TreeNode*> q;
        TreeNode* cur = root;
        if(root != NULL) {
            q.push(root->left);
            q.push(root->right);
        }
        while(q.empty() == false) {
            TreeNode* left = q.front();
            q.pop();
            TreeNode* right = q.front();
            q.pop();
            if(left == NULL && right == NULL) {
                ;
            }
            else if(left != NULL && right != NULL) {
                if(left->val != right->val) {
                    ret = false;
                    break;
                } else {
                    q.push(left->left);
                    q.push(right->right);
                    q.push(left->right);
                    q.push(right->left);
                }
            } else {
                ret = false;
                break;
            }
            
        }
        return ret;
    }
};