class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int j=0;
        while(j<n){
            int i=0, k=n-1;
            
            while(i<j && j<k){
                int sum = nums[i]+nums[j]+nums[k];
                
                if(sum==0){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    int tempi = i;
                    int tempk= k;
                    while(nums[i]==nums[tempi] && nums[k]==nums[tempk]){
                        i++;
                        k--;
                        if(i>=j || k<=j){
                            break;
                        }
                    }
                    
                }
                else if(sum>0){
                    k--;
                }else{
                    i++;
                }
            }
            j++;
        }
        
        
        set<vector<int>> s;
        for(int i=0;i<ans.size();i++){
            s.insert(ans[i]);
        }
        vector<vector<int>> result;
        
        for(auto v: s){
            result.push_back(v);
        }
        return result;
    }
};