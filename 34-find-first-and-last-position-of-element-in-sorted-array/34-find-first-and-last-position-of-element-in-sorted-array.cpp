class Solution {
public:
    
    int firstOcc(vector<int>& arr, int n, int k){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s <= e){
        if(k == arr[mid]){
            ans = mid;
            e = mid-1;
        }else if(k < arr[mid]){
            e = mid-1;
        }else if(k > arr[mid]){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int k){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(k==arr[mid]){
            ans=mid;
            s=mid+1;
        }else if(k<arr[mid]){
            e=mid-1;
        }else if (k>arr[mid]){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(firstOcc(nums,nums.size(),target));
        ans.push_back(lastOcc(nums,nums.size(),target));
        return ans;
    }
};