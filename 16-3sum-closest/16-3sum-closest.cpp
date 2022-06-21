class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int j=0;
        int close = 1e4;
        int ans = 0;
        while(j<n){
            
            int i=0, k=n-1;
            while(i<j && j<k){
                int diff = abs(target-(nums[i]+nums[j]+nums[k]));
                if(diff<close){
                    close = diff;
                    ans = nums[i]+nums[j]+nums[k];
                }
                if(nums[i]+nums[j]+nums[k]>target){
                    k--;
                }else if(nums[i]+nums[j]+nums[k]<target){
                    i++;
                }else{
                    ans = nums[i]+nums[j]+nums[k];
                    break;
                }
            }
            
            j++;
        }
        return ans;
    }
};