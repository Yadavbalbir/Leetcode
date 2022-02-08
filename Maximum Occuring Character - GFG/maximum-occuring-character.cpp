// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


#include<vector>

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        vector<int> strcnt(26,0);
        for(int i=0;i<str.length();i++){
            if(str[i]>='a'){
                 strcnt[str[i]-'a']++;
            }else{
                strcnt[str[i]-'A']++;
            }
        }
        
        int maxindex=0;
        for(int i=0;i<26;i++){
            if(strcnt[maxindex]<strcnt[i]){
                maxindex=i;
            }
        }
       char ans='a'+maxindex;
       return ans;
        
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends