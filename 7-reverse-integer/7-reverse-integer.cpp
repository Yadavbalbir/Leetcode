class Solution {
public:
    int reverse(int x) {
        int rvs=0;
        while(x!=0){
            int pop = x%10;
            x/=10;
            if(rvs>(INT_MAX/10) || (rvs==INT_MAX && pop>7)) return 0;
            if(rvs<(INT_MIN/10) || (rvs==INT_MIN && pop<-8)) return 0;
            
            rvs = (rvs*10) + pop;
        }
        
        return rvs;
    }
};