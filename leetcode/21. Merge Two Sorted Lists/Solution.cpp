class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        ListNode *ret = l1, *tmp1 = l1, *tmp2 = l2, *old;
        if(l1 != NULL || l2 != NULL) {
            if( (l1 == NULL && l2 != NULL) 
            || (l1 != NULL && l2 != NULL && l1->val > l2->val)) {
                ret = l2;
                tmp1 = l2;
                tmp2 = l1;
            }
            while(tmp1->next != NULL) {
                old = tmp1;
                tmp1 = tmp1->next;
                if (tmp2 != NULL && tmp1->val >= tmp2->val) {
                    ListNode *bkup = old->next;
                    old->next = tmp2;
                    while(old->next != NULL && old->next->val <= tmp1->val) {
                        old = old->next;
                    }
                    tmp2 = old->next;
                    old->next = bkup;
                }
            }
            if(tmp2 != NULL) {
                tmp1->next = tmp2;
            }
        }
        return ret;
    }
};