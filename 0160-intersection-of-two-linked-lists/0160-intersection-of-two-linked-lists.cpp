
class Solution {
public:
int size(ListNode* head){
    ListNode*temp=head;
    int n=0;
    while(temp){
        n++;
        temp=temp->next;
    }
    return n;
}

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*tempA=headA;
         ListNode*tempB=headB;

         int sA=size(headA);
         int sB=size(headB);

     int diff=abs(sA-sB);

     if(sA > sB){
        for(int i=0;i<diff;i++){
           if(tempA) tempA=tempA->next;
        }
     }

     else{  // if(sB > sA)
         for(int i=0;i<diff;i++){
            if(tempB) tempB=tempB->next;
        } 
     }

      while(tempA || tempB ){
        if(tempA == tempB ) return tempA;
        if(tempA) tempA=tempA->next;
       if(tempB) tempB=tempB->next;
      }

return 0;

    }
};