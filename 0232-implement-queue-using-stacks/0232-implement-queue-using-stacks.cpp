class MyQueue {
public:
stack<int>st;
stack<int>helper;

    MyQueue() {
        
    }

    void pushAtBottom(stack<int>&st,int x){
        while(!st.empty()){
            helper.push(st.top());
             st.pop();
        }
        st.push(x);
        while(!helper.empty()){
            st.push(helper.top());
             helper.pop();
        }
    }
    
    void push(int x) {
        pushAtBottom(st,x);
        
    }
    
    int pop() {
            int x = st.top();
    st.pop();
    return x;
        
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty() ;
    }
};

