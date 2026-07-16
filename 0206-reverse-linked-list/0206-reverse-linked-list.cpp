
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* pre=NULL;
    ListNode* curr=head;
    ListNode* ahead=head;
    while(ahead!=NULL){
    ahead=curr->next;
    curr->next=pre;
    pre=curr;
    curr=ahead;
    }
    return pre;
    }
    };