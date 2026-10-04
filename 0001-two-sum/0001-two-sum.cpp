class Solution {
public:
    vector<int> twoSum(vector<int>&v, int t) {
        int n=v.size();
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
        int d= t-v[i];
        if(mp.find(d)!=mp.end()) return{i,mp[d]};
            else mp[v[i]]=i;
    }
    return {};
    }
};