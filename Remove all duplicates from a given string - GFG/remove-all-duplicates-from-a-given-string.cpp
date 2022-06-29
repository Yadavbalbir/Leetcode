// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	   vector<int> arr1(26);
	   vector<int> arr2(26);
	   
	    
	    string result;
	    for(auto v: str){
	        if(v>='a' && v<='z'){
	            if(arr1[v-'a']==0){
	                result.push_back(v);
	                arr1[v-'a']++;
	            }
	        }else{
	            if(arr2[v-'A']==0){
	                result.push_back(v);
	                arr2[v-'A']++;;
	            }
	        }
	    }
	    
	    return result;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends