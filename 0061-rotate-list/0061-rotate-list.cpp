
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp= head;
        ListNode* tail= NULL;
        int n=0;
        //Find length and tail
        while(temp!=NULL){
            if(temp->next==NULL) tail=temp;
            temp=temp->next;
            n++;
        }
        if(k==0) return head;
        k=k%n; /// if k is 10 and n=5 so wehave to rotate k 2 times {imp rotate concept}
        temp=head;
        // Moving temp to n-k index
        for(int i=1;i<n-k;i++){
            temp=temp->next;
        }
        tail->next=head;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};