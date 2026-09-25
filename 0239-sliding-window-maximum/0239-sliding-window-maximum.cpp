class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
        int n=v.size();
        if(k==1) return v;  // basse case
        vector<int>ans;
        deque<int>dq;

        for(int i=0;i<n;i++){

            while(!dq.empty() && v[i] > v[dq.back()]) dq.pop_back();
            dq.push_back(i);

           int j=i-k+1;  // start index of window

        while( j > dq.front()) dq.pop_front();

        if(i >= k-1) ans.push_back(v[dq.front()]);  // if i >= window size, fill as array
        }
        return ans;
    }
};