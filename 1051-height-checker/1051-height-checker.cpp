class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int idx=0;
        vector<int> expected = heights;
        
        sort(expected.begin(), expected.end());
        
        for(int i=0;i<heights.size();i++){
            if(expected[i]!=heights[i]) idx++;
        }
        
        return idx;
    }
};