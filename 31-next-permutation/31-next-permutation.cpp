#include<algorithm>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        vector<int> arr;
        arr = nums;
        
       sort(arr.begin(), arr.end());
       reverse(arr.begin(), arr.end());
        
       if(arr!=nums){
           next_permutation(nums.begin(), nums.end());
       }
        else{
            reverse(nums.begin(), nums.end());
        }
            
    }
};