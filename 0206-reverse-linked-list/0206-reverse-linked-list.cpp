
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* n=NULL;
        ListNode* p=NULL;
        ListNode* c=head;
        while(c){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;

    }
};