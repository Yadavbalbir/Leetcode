#include<sstream>  
class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> cnts(26,0);
        vector<int> cntt(26,0);
        int idx;
        for(int i=0;i<s.length();i++){
            cnts[s[i]-'a']++;
        }
        for(int j=0;j<t.length();j++){
            cntt[t[j]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(cnts[i]!=cntt[i]){
                idx=i;
                break;
            }
        }
       char ans='a'+idx;
       return ans;
    }    
};