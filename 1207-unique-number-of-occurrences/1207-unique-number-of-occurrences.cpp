class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        map<int,int> mp;
        
        for(auto v: arr){
            mp[v]++;
        }
        
        int cnt =0;
        set<int> ans;
        for(auto v: mp){
            cnt++;
            ans.insert(v.second);
        }
        
        if(cnt==ans.size()) return 1;
        else return 0;
    }
};