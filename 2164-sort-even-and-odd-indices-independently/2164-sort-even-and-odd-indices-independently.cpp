class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        int n = nums.size();
        int j=0;
        for(int i=0; i<(n/2); i++){
            even.push_back(nums[j++]);
            odd.push_back(nums[j++]);
        }
        
        if((even.size()+odd.size())!= n ){
            even.push_back(nums[j]);
        }
        
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        reverse(odd.begin(), odd.end());
    
     j=0;
    for(int i=0; i<odd.size();i++){
        nums[j++] = even[i];
        nums[j++] = odd[i];
    }
    if(odd.size()!=even.size()){
        nums[j]=even.back();
    }
    
    return nums;
              
    }
};