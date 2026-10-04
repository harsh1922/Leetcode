class Solution {
public:

string rev(string &s){
    sort(s.begin(),s.end());
    return s;
}
    int maximumNumberOfStringPairs(vector<string>&v) {
        int n=v.size();
        unordered_map<string,int>mp;
        int ans=0;
        for(int i=0;i<n;i++){
            string r=rev(v[i]);

            //If we found in map => ans++
            if(mp.find(r)!=mp.end()) ans++;
            else {
                mp[r]=i;
            }
        }
        return ans;
    }
};