class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        int n=arr.size();
        int counter[n];
        fill_n(counter,n,0);
        int seen[n];
        fill_n(seen,n,0);
        int idx=0; 
        for(int i=0;i<n;i++){
            int newfound=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j] && seen[j]==0){
                    counter[idx]++; 
                    seen[j]=1;
                    newfound=1;
                }
            }
            if(newfound==1){
                idx++;
            }
        }
        for(int i=0;i<idx;i++){
            cout<< counter[i]<<" ";
        }
        
     
        for(int i=0;i<idx;i++){
            for(int j=i+1;j<idx;j++){
                if(counter[i]==counter[j]){
                    return false;
                }
            }
        }
        return true;
        
    }
};