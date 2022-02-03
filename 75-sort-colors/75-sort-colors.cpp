// ## Bubble Sort
class Solution {
public:
//     void sortColors(vector<int>& arr) {
//         int n=arr.size();
//         for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     }
     void sortColors(vector<int>& nums) {
       int zero = 0;
        int one = 0;
        int two = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] == 0){
                zero++;
            }else if(nums[i] == 1){
                one++;
            }else{
                two++;
            }
        }
        
        int t = 0;
        while(zero--){
            nums[t] = 0;
            t++;
        }
        while(one--){
            nums[t] = 1;
            t++;
        }
        while(two--){
            nums[t] = 2;
            t++;
        }
        
    }
};

// ## Faster Approach
