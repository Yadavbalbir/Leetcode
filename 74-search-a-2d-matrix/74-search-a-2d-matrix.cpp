class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         arr.push_back(matrix[i][j]);
        //     }
        // }
        
        int s=0;
        int e=row*col-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            int element=matrix[mid/col][mid%col];
            if(element==target) return true;
            else if(element>target) e=mid-1;
            else s=mid+1;
            mid=s+(e-s)/2;
        }
        
        return false;
        
    }
};