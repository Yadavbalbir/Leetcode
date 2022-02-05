class Solution {
public:
    bool check(vector<int>& nums) {
//         int i=0;
//         int j=0;
//         while((i<nums.size()-1)  && (j<nums.size()-1)){
//             if(j>i){
//                 if(nums[j]>nums[j+1]) return false;
//                 j++;
//             }
//             else{
//                 if(nums[i]<=nums[i+1]) i++;
//                 else{
                    
//                     j=i+1;
//                      if(nums[0]<nums[nums.size()-1]){
//                          return false;
//                     }
//                 }
//             }
//         }
//         return true;
        
        
        // Method2
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]) cnt++;
        }
        if(nums[n-1]>nums[0]) cnt++;
        if(cnt<=1){
            return true;
        }
        return false;
    }
};