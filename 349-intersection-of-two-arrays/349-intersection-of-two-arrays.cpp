class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> n1;
        set<int> t1;
        set<int> n2;
        for(auto v : nums1){
            n1.insert(v);
            t1.insert(v);
        }
        
        for(auto v: nums2){
            n2.insert(v);
        }
        
        for(auto v: n2){
            t1.erase(v);
        }
         
        for(auto v: t1){
            n1.erase(v);
        }
        
        vector<int> ans;
        for(auto v: n1){
            ans.push_back(v);
        }
        
        return ans;
    }
};