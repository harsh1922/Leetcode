class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;

        ListNode* a = head;
        ListNode* b = head->next;

        while (b) {
            if (a->val == b->val) {
                b = b->next;
                a->next = b;
            } 
            else {
                a = a->next;
                b = b->next;
            }
        }

        return head;
    }
};