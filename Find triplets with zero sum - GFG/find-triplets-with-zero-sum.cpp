//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
         //sort array
        for(int i=0; i<n;i++){
            int minidx = i;
            for(int j=i+1; j<n;j++){
                if(arr[minidx]>arr[j]){
                    minidx = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minidx];
            arr[minidx] = temp;
        }
        

        
        for(int i=0; i<n;i++){
            int left = i+1;
            int right = n-1;
            
            int sum = arr[i] + arr[left] + arr[right];
            while(left<right){
                if(sum<0) left++;
                else if(sum>0) right--;
                else return 1;
                
                sum = arr[i] + arr[left] + arr[right];
            }
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends