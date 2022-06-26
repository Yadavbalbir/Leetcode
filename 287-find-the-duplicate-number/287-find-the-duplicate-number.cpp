class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto v: nums){
            mp[v]++;
        }
        
        for(auto v: mp){
            if(v.second>1) return v.first;
        }
        
        return -1;
    }
};