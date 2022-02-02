class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
           
            sum1+=nums[i];
            if((sum-sum1)==0){
                return i;
            }
            sum-=nums[i];
           
        }
        return -1;
    }
};