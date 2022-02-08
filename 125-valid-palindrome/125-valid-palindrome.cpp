
class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.length();i++){
             if((s[i]>='A')&&(s[i]<='Z')){
                s[i]=s[i]-'A'+'a';
            }
        }
        char A[1000000];
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(((s[i]>='0') && (s[i]<='9')) || ((s[i]>='a') && (s[i]<='z'))){
                A[cnt++]=s[i];
            }
        }
        A[cnt]='\0';
        
        for(int i=0;i<cnt;i++){
            cout<<A[i];
        }
        cout<<endl;
        int start=0;
        int end=cnt-1;
        while(start<end){
            if(A[start]!=A[end]){
                return false;
            }else{
                start++;
                end--;
            }
        }
        return true;
        
    }
};