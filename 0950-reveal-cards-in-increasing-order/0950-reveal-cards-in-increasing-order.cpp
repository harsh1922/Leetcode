class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>&d) {
        int n=d.size();
        vector<int>v(n);

        sort(d.begin(),d.end());

        queue<int>q;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        int idx,i=0;
        while(!q.empty() && i<n){
            idx=q.front();
            q.pop();
            q.push(q.front());
            q.pop();
            v[idx]=d[i];
            i++;
        }
        return v;
    }
};