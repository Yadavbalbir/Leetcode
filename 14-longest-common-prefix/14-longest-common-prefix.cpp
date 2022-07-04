class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        
        for(auto s : strs){
            string temp;
            
            if(s.size()>=ans.size()){
                for(int i=0;i<ans.size();i++){
                    if(s[i]==ans[i]){
                        temp.push_back(ans[i]);
                    }else{
                        break;
                    }
                }
            }else{
                for(int i=0;i<s.size();i++){
                    if(s[i]==ans[i]){
                        temp.push_back(ans[i]);
                    }else{
                        break;
                    }
                }
            }
            
            ans = temp;
        }
        
        return ans;
    }
};