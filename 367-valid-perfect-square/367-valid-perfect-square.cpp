class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long long start = 1;
        long long end = num;
        long long mid = start + (end-start)/2;
        
        
        while(start<=end){
            if(mid*mid==num){
                return true;
            }else if(mid*mid<num){
                start = mid+1;
            }else{
                end = mid-1;
            }
            
            mid = start + (end-start)/2;
        }
        
        return false;
        
    }
};