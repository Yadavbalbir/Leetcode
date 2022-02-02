class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        if(nums.size()==1 || nums[0]>nums[1] ){
            return 0;
        }
        if(nums[nums.size()-1]>nums[nums.size()-2]){
           return nums.size()-1;
        }
        while(s<e){
            if((nums[mid]>nums[mid-1]) &&  (nums[mid]>nums[mid+1])){
                return mid;
            }else if(nums[mid]>nums[mid-1]){
                s=mid+1;
            }else{
                 e=mid;
            }
            mid=s+(e-s)/2;
        }
        return 0;
    }
};