class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size()==1 && digits[0]==9){
            vector<int> ans;
            ans.push_back(1);
            ans.push_back(0);
            return ans;
        }
        else{
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]!=9){
                digits[i]=digits[i]+1;
                break;
            }
            if(digits[i]==9){
                
                digits[i]=0;
                if(i==0){
                    vector<int> ans;
                 ans.push_back(1);
                for(int i=0;i<digits.size();i++){
                 ans.push_back(0);
                }
                 return ans;
                }
            }
        }
        }
        return digits;
    }
};