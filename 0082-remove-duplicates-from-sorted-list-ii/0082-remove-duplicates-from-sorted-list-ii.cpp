
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*t=new ListNode(10);
        ListNode*ans=t;
         ListNode*c=head;

         while (c && c->next) {
    if (c->val == c->next->val) {
        while (c->next && c->val == c->next->val)
            c = c->next;
        c = c->next;
    } else {
        ans->next = c;
        ans = ans->next;
        c = c->next;
    }
}
ans->next = c;
return t->next;
    }
};