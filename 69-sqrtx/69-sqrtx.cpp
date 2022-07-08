class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return x;
        long long left = 1;
        long long right = x;
        int ans=-1;
        long long mid = left + (right-left)/2;
        
        while(left<=right){
            if((mid*mid)==x){
                ans = mid;
                break;
            }
            else if((mid*mid)<x){
                ans = mid;
                left = mid+1;
            }else{
                right = mid-1;
            }
            
            mid = left + (right-left)/2;
        }
        
        return ans;
    }
};