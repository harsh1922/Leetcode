
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        if(n==1) return NULL;
        if(head==NULL || head->next==NULL) return head;
        ListNode* slow=head;
        ListNode* fast=head;
        //Finding Right middle
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
         ListNode* curr=head;
         while(curr->next!=slow){
            curr=curr->next;
         }
         curr->next=curr->next->next;
        return head;
        }
        };