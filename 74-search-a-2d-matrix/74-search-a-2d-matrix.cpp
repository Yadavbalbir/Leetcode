class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> arr;
        int row=matrix.size();
        int col=matrix[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                arr.push_back(matrix[i][j]);
            }
        }
        
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(arr[mid]==target) return true;
            else if(arr[mid]>target) e=mid-1;
            else s=mid+1;
            mid=s+(e-s)/2;
        }
        
        return false;
        
    }
};