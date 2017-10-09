class Solution {
public:
    void goStep(ListNode* &cur) {
        if(cur != NULL && cur->next != NULL) {
            cur = cur->next;
        } else {
            cur = NULL;
        }
    }
    bool hasCycle(ListNode *head) {
        bool ret = false;
        ListNode* twoStep = head;
        ListNode* oneStep = head;
        
        while(oneStep != NULL && twoStep != NULL) {
            goStep(oneStep);
            goStep(twoStep);
            goStep(twoStep);
            
            if(oneStep != NULL && twoStep != NULL && oneStep == twoStep) {
                ret = true;
                break;
            }
        }
        return ret;
    }
};