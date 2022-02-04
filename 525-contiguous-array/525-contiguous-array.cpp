// Brute force method---> TLE----> Needs to optimise this
// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {
//         if(nums.size()==1){
//             return 0;
//         }
//         int sum=0;
//         int longest=0;
//         for(int i=0;i<nums.size();i++){
//             sum=0;
//             for(int j=i;j<nums.size();j++){
//                 if(nums[j]==0){
//                     sum+=-1;
//                 }else{
//                      sum+=1;
//                 }
//                 if(sum==0){
//                     if(longest< (j-i+1)){
//                         longest=j-i+1;
//                     }
//                 }
//             }
//         }
//         return longest;
//     }
// };

// Method2  I'll solve it again as I progress ahead in this course

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0, maxLen=0;
        unordered_map<int, int> seen{{0, -1}};
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i]==1 ? 1 : -1;
            if(seen.count(sum)) maxLen = max(maxLen, i-seen[sum]);
            else seen[sum] = i;
        }
        return maxLen;
    }
};