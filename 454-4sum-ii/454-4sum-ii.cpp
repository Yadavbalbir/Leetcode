// class Solution {
// public:
//     int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
//         int cnt=0;
//         for(int i=0;i<nums1.size();i++){
//             for(int j=0;j<nums2.size();j++){
//                 for(int k=0;k<nums3.size();k++){
//                     for(int l=0;l<nums3.size();l++){
//                         if(nums1[i]+nums2[j]+nums3[k]+nums4[l]==0){
//                             cnt++;
//                         }
//                     }
//                 }
//             }
//         }
//         return cnt;
//     }
// };

// # Method 2
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int cnt = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < nums1.size(); i++)
        {
            for(int j = 0; j < nums2.size(); j++)
            {
                int sum = nums1[i] + nums2[j];
                mp[sum]++;
            }
        }
        for(int i = 0; i < nums3.size(); i++)
        {
            for(int j = 0; j < nums4.size(); j++)
            {
                int sum = (-1) * (nums3[i] + nums4[j]);
                if(mp[sum])
                {
                    cnt += mp[sum];
                }
            }
        }
        return cnt;
    }
};