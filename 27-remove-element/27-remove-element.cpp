class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if(n==0) return 0;
        int last = n-1;
        int first = 0;
        while(first<=last){
            if(nums[first]!=val){
                first++;
            }
            else{
                swap(nums[first], nums[last]);
                last--;
            }
        }
        
        return first;
    }
};