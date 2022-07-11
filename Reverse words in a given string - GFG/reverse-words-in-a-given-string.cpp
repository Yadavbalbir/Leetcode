// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        vector<string> v;
        string word;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                v.push_back(word);
                word.clear();
            }else{
                word.push_back(s[i]);
            }
        }
        
        v.push_back(word);
        string ans="";
        for(int i = v.size()-1; i>0;i--){
            ans= ans+v[i]+'.';
        }
        
        ans = ans + v[0];
        
        return ans;
        
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends