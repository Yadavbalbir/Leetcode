class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        int irow=0;
        int icol=col-1;
        while(irow<row && icol>=0){
            int element=matrix[irow][icol];
            if(element==target) return true;
            else if(element<target) irow++;
            else icol--;
        }
        
        return false;
    }
};