class Solution {
public:

string rev(string &s){
    sort(s.begin(),s.end());
    return s;
}
    int maximumNumberOfStringPairs(vector<string>&v) {
        int n=v.size();
        unordered_set<string>st;
        int ans=0;
        for(int i=0;i<n;i++){
            string r=rev(v[i]);

            //If we found in map => ans++
            if(st.find(r)!=st.end()) ans++;
            else {
                st.insert(r);
            }
        }
        return ans;
    }
};