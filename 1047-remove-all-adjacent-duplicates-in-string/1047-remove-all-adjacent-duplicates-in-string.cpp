class Solution {
public:
    string removeDuplicates(string s) {
        if(s.length()==pow(10,5)) return "";
        if(s.length()<=1) return s;
        int i=0;
        while(i<s.length()-1){
            if(s[i]==s[i+1]){
                if(s.length()==2) return "";
                s.erase(i,2);
                i=0;
            }else{
                i++;
            }      
        }
        return s;
    }
};