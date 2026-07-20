
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

    ListNode* reverseBetween(ListNode* head, int l, int r) {
        if(l==r) return head;
        ListNode*a= NULL;
          ListNode*b= NULL;
            ListNode*c= NULL;
              ListNode*d= NULL;
                ListNode*temp= head;
                int n=1; //// Asuming traverssrig from 1-n
                while(temp!=NULL){
                    if(n==l-1) a=temp;
                     if(n==l) b=temp;
                      if(n==r) c=temp;
                       if(n==r+1) d=temp;
                       temp=temp->next;
                       n++;
                }
               if(a!=NULL) a->next=NULL;
                c->next=NULL;
                c=reverse(b);
               if(a!=NULL) a->next=c;
                b->next=d;
                if(a!=NULL)return head;
                return c;
                }
                };
       