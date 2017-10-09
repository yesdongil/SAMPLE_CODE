class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ret = NULL;
        ListNode** node = &ret;
        ListNode* carryNode = NULL;
        int carry = 0;
        while(l1 != NULL || l2 != NULL) {
            *node = NULL;
            if(l1 != NULL) {
                *node = l1;
                l1 = l1->next;
            }
            if(l2 != NULL) {
                if(*node != NULL) {
                    (*node)->val += l2->val;
                    if(carryNode == NULL) {
                        carryNode = l2;
                    }
                } else {
                    *node = l2;
                }
                l2 = l2->next;
            }
            (*node)->val += carry;
            if((*node)->val >= 10) {
                (*node)->val %= 10;
                carry = 1;
            } else {
                carry = 0;
            }
            if(l1 != NULL || l2 != NULL) {
                node = &((*node)->next);
            }
        }
        if(carry == 1) {
            carryNode->val = 1;
            carryNode->next = NULL;
            (*node)->next = carryNode;
        }
        return ret;
    }
};