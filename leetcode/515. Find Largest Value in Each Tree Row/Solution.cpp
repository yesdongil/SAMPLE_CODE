class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ret;
        queue<TreeNode*> q;
        
        if(root != NULL) {
            int n = 1, max_val = INT_MIN;
            q.push(root);
            while(q.empty() == false) {
                TreeNode* node = q.front();
                n--;
                q.pop();
                if(node != NULL) {
                    max_val = max(max_val, node->val);
                    if(node->left != NULL) {
                        q.push(node->left);
                    }
                    if(node->right != NULL) {
                        q.push(node->right);
                    }
                }
                if(n == 0) {
                    ret.push_back(max_val);
                    max_val = INT_MIN;
                    n = q.size();
                }
            }
        }
        return ret;
    }
};