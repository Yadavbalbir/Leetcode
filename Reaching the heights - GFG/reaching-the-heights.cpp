// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

vector<int> reaching_height(int n, int a[]) {
    // Complete the function
    sort(a, a+n);
    
    vector<int> ans;
    int i=0;
    int j=n-1;
    while(i<=j){
        if(i==j){
            ans.push_back(a[j]);
        }
        else{
            ans.push_back(a[j]);
            ans.push_back(a[i]);
        }
        
        i++;
        j--;
    }
    
    // for(auto v: ans){
    //     cout<<v<<" ";
    // }
    // cout<<endl;
    
    int sum=ans[0];
    for(int i=1;i<n;i++){
        // cout<<sum<<" ";
        if(i%2==1) sum -= ans[i];
        else sum += ans[i];
        // cout<<sum<<endl;
        if(sum==0) return {-1};
    }
    
    return ans;
    
}
