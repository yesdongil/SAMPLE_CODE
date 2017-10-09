/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* node = head;
        ListNode* cur = head;
        ListNode* prev;
        
        while(node != NULL) {
            node = node->next;
            count++;
            if(count > n) {
                prev = cur;
                cur = cur->next;
            }
        }
        if(count >= n) {
            if(cur == head) {
                head = head->next;
            } else {
                prev->next = cur->next;
            }
        }
        return head;
    }
};