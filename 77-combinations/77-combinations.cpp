
class Solution {
    vector<int> arr;
    vector<int> sol;
    vector<vector<int>> gans;

    void rec(int level, int n, int k){
        if(level==n){
        if(sol.size()==k){
            gans.push_back(sol);
        } 
        return;
    }
    
    // take
    if(sol.size()<k){
        sol.push_back(arr[level]);
        rec(level+1, n, k);
        sol.pop_back();
    }
    
    // don't take
    rec(level+1, n, k);
}
public:
    vector<vector<int>> combine(int n, int k) {
       vector<vector<int>> ans;
        
        for(int i=0;i<n;i++){
            arr.push_back(i+1);
        }
        
        rec(0, n, k);
        
        return gans;
        
        
    }
};