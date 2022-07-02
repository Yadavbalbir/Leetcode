class Solution {
public:
    
    vector<vector<int>> ans;
    int cnt = 0;
    vector<int>queen;
    
    bool check(int row, int col){
        for(int prow=0; prow<row; prow++){
            if(queen[prow]==col || abs(prow-row)==abs(col-queen[prow])) return false;
        }
        return true;
    }
    
    void rec(int level, int n){
        //base case 
        
        if(level==n){  //
            ans.push_back(queen);
            cnt++;
        }
        
        // recursive case
        for(int col = 0; col<n; col++){
            if(check(level, col)){
                queen.push_back(col);
                rec(level+1, n);
                queen.pop_back();
            }
        }
           
    }
    
    
    int totalNQueens(int n) {
        rec(0, n);
        
        return cnt;
    }
};