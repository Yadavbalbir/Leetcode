class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int Max_w=0;
        
        for(auto v : sentences){
            int cnt=1;
            for(int i=0;i<v.length();i++){
                if(v[i]==' ') cnt++;
            }
            Max_w = max(Max_w, cnt);
        }
        
        return Max_w;
    }
};