 
class Solution {
public:
ListNode* reverse(ListNode* head) {
        ListNode* pre=NULL;
    ListNode* curr=head;
    ListNode* ahead=head;;
    while(curr!=NULL){
    ahead=curr->next;
    curr->next=pre;
    pre=curr;
    curr=ahead;
    }
    return pre;
    }
    bool isPalindrome(ListNode* head) {
        ListNode*slow= head;
        ListNode*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newHead=reverse(slow->next);
        ListNode* a=head;
        ListNode* b=newHead;
        while(b!=NULL){
            if(a->val != b->val) return false;
            a=a->next;
            b=b->next;
        }
        return true;
        }
        };
