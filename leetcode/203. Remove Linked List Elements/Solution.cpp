class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = head;
        ListNode* ret = prev;
        while(head != NULL) {
            if(head->val == val) {
                if(prev == head) {
                    prev = head->next;
                    ret = prev;
                } else {
                    prev->next = head->next;
                }
            } else {
                prev = head;
            }
            head = head->next;
        }
        return ret;
    }
};