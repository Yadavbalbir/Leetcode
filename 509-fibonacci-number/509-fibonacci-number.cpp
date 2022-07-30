class Solution {
public:
    int dp[1000100];
    int F(int n){
        if(n<=1) return n;
        
        // if have it solved
        if(dp[n]!=-1){
            return dp[n];
        }
        
        //doing computation
       return dp[n]= F(n-1)+F(n-2);
    }
    
    int fib(int n) {
        memset(dp,-1,sizeof(dp));
        return F(n);
    }
};