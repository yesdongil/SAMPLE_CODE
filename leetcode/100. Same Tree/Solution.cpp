class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> pQ, qQ;
        bool ret = true;
        do {
            if(pQ.empty() == false) {
                p = pQ.front();
                pQ.pop();
            }
            if(qQ.empty() == false) {
                q = qQ.front();
                qQ.pop();
            }
            if( (p != NULL) && (q != NULL) ) {
                if(p->val == q->val) {
                    pQ.push(p->left);
                    pQ.push(p->right);
                    qQ.push(q->left);
                    qQ.push(q->right);
                    
                } else {
                    ret = false;
                    break;
                }
            } else if ( (p == NULL) && (q == NULL) ) {

            } else {
                ret = false;
                break;
            }
        } while(pQ.empty() == false && qQ.empty() == false);
        return ret;
    }
};