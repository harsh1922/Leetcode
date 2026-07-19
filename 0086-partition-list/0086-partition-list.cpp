
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp=head;
        ListNode* lo =new ListNode(0);
        ListNode* hi=new ListNode(1);
        ListNode* tlo =lo;
        ListNode* thi =hi;

        while(temp){
            if(temp->val < x){
                tlo->next=temp;
                temp=temp->next;
                tlo=tlo->next;
            }
            else {  // if(temp>= x)
                thi->next=temp;
                temp=temp->next;
                thi=thi->next;
            }
        }
        tlo->next=hi->next;
        thi->next=NULL;
        return lo->next;

        
    }
};