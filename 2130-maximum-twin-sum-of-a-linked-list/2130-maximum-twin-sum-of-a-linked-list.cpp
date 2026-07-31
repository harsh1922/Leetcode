
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

    int pairSum(ListNode* head) {
         ListNode* s=head;
          ListNode* f=head;
          ListNode* b;
          while(f && f->next->next){  //finding left middle
            s=s->next;
            f=f->next->next;
          } 
          b=reverseList(s->next); //rverse half list
int sum=0,ans=0;
          while(head && b){
            sum=head->val + b->val;
            ans=max(ans,sum);
            head=head->next;
            b=b->next;
          }
          return ans;
    }
};