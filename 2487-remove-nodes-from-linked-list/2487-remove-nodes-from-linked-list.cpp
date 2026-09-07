class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;

        while (head) {

            while (!st.empty() && st.top()->val < head->val) {
                st.pop();
            }

            st.push(head);
            head = head->next;
        }

        ListNode* newHead = nullptr;

        while (!st.empty()) {
            st.top()->next = newHead;
            newHead = st.top();
            st.pop();
        }

        return newHead;
    }
};