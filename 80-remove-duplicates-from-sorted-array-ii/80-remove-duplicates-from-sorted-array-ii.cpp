class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<3) return nums.size();
        int j = 0;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            int k = i;
            while(nums[i]==nums[k]){
                k++;
                cnt++;
                if(k==nums.size()) break;
            }
            if(cnt>2) cnt=2;
            while(cnt--){
                nums[j++]=nums[i];
            }
            i=k-1;
        }
        return j;
    }
};