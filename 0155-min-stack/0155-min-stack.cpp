class MinStack {
public:
typedef long long ll;

stack<ll>st;
ll mn;

    MinStack() {
       mn=LLONG_MAX; 
    }
    
    void push(int val) {
        ll x= (ll) val;
        if(st.size() == 0){
            st.push(x);
            mn=x;
        }

        else if(x >= mn){
            st.push(x);
        }

        else{ // v < mn
            st.push(2*x - mn);
            mn=x;
        }
    }
    
    void pop() {
        if(st.top() >= mn) st.pop();

        else { //st.top()< mn ie fake val is present
           ll oldmn = 2*mn - st.top();
           mn=oldmn;
           st.pop();
        }
    }
    
    int top() {
       if (st.top() >= mn)  return (int) st.top();
       return (int) mn;
    }
    
    int getMin() {
        return (int) mn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */