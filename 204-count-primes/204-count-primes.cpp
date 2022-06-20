class Solution {
public:
    int countPrimes(int n) {
        if(n==0) return 0;
       int arr[n];
        
        for(int i=0;i<n;i++){
            arr[i]=1;
        }
        
        for(int i=2;i<n;i++){
            if(arr[i]==1){
                for(int j=2*i;j<n;j=j+i){
                    arr[j]=0;
                }
            }
        }
        
        int cnt=0;
        
        for(int i=2;i<n;i++){
            if(arr[i]==1) cnt++;
        }
        
        return cnt;
    }
};