class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        int d = 0;
        while(d<n){
            int b = 0;
            while(b<d){
                int a = 0, c = d-1;
                while(a<b && b<c){
                    long long int sum = (long long) nums[a]+nums[b]+nums[c]+nums[d];
                    if(sum==target){
                        ans.insert({nums[a], nums[b], nums[c], nums[d]});
                        a++;
                        c--;
                    }
                    
                    else if(sum<target) a++;
                    else c--;
                }
                
                b++;
            }
            
           d++;
        }
        
        vector<vector<int>> v;
        for(auto var : ans){
            v.push_back(var);
        }
        
        return v;
        
    }
};