class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = head;
        ListNode* bkup = NULL;
        while(cur != NULL) {
            if(bkup == NULL) {
                bkup = cur;
            } else {
                if(bkup->val != cur->val) {
                    bkup->next = cur;
                    bkup = cur;
                }
            }
            cur = cur->next;
            bkup->next = NULL;
        }
        return head;
    }
};