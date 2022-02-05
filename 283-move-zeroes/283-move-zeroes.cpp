class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cntzero=0;
        for(int i:nums){
            if(i==0){
                cntzero++;
            }
        }
        int i=0,j=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
            i++;
        }
        while(cntzero--){
            nums[j]=0;
            j++;
        }
    }
};