class Solution {
public:
    bool check(vector<int>& nums) {
        int i=0;
        int j=0;
        while((i<nums.size()-1)  && (j<nums.size()-1)){
            if(j>i){
                if(nums[j]>nums[j+1]) return false;
                j++;
            }
            else{
                if(nums[i]<=nums[i+1]) i++;
                else{
                    
                    j=i+1;
                     if(nums[0]<nums[nums.size()-1]){
                         return false;
                    }
                }
            }
        }
        return true;
    }
};