
class Solution {
public:

 ListNode* reverse(ListNode* head, int k) {
    ListNode* pre=NULL;
    ListNode* curr=head;
    ListNode* ahead=NULL;

    while(k--){
    ahead=curr->next;
    curr->next=pre;
    pre=curr;
    curr=ahead;
    }
    return pre;

 }

 ListNode* getNode(ListNode* head, int k) {
    k-=1;
    while(head && k>0){
        k--;
        head=head->next;
    }
    return head;
 }

    ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* prevLast=NULL;
    ListNode* temp=head;
    ListNode* next=head;
    ListNode* KNode;

    while(temp){
        KNode=getNode(temp,k);
        if(KNode == NULL){
            if(prevLast) prevLast->next=temp; // if we didnt find k pairs then seimplky connect prev with temp node
            break;
        }
        next=KNode->next;
         reverse(temp,k);
         if(head == temp){
            head=KNode;
         }
         else prevLast->next=KNode;

         prevLast=temp;
         temp=next;
    }
    return head;
    }
};