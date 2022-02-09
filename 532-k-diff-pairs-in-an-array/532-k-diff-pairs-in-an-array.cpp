bool iffound(vector<int> nums,vector<int> v, int I,int J){
    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
   while(s<=e){
       if(nums[v[mid]]==nums[I]) return true;
       else if(nums[v[mid]]<nums[I]) s=mid+1;
       else e=mid-1;
       mid=s+(e-s)/2;
   }

    return false;
}
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int cnt=0;
       int i=0,j=1;
        while(j<nums.size()){
            if(i==j) j++;
            else if((nums[j]-nums[i])==k){
                if(v.size()==0){
                    cnt++;
                     v.push_back(i);
                }
               else if(!(iffound(nums,v,i,j))){
                    cnt++;
                    v.push_back(i);
                }
                i++;
                j++;
            }else if((nums[j]-nums[i])<k){
                j++;
            }else{
                i++;
            }
        }
        return cnt;
        }
};