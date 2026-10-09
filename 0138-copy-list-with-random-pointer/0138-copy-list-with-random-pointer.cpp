
class Solution {
public:
    Node* copyRandomList(Node* head) {

        // Step 1=> Create deep copy  without random pointer
        Node* dummy=new Node(100);
        Node* tc=dummy;
        Node *temp=head;
        while(temp){
            Node* a=new Node(temp->val);
            tc->next=a;
            tc=tc->next;
            temp=temp->next;
        }
        Node* a=head;  //Original List
        Node *b=dummy->next;    // Deep Copy of Original where all node have random pounter at Null;

        // Step 2=> Now Assign Random ponter to List b to creaet the exact copy off originla List


//// Fill map with <Node*a,Node*b>
        unordered_map<Node*, Node*>mp;
        Node *ta=a;
        Node *tb=b;
        while(ta && tb){
          mp[ta]=tb;
          ta=ta->next;
          tb=tb->next;
        }

        // Step 3, now using map we have access to List a and oits random ponter nowe we can simply ad random pointer in Nide b as well
        for(auto x : mp){
            Node *f= x.first;  //a node
            Node *s= x.second;  // b node
            if(f->random!=NULL){
                s->random= mp[f->random];
            }
            }
            return b;
        }
    };