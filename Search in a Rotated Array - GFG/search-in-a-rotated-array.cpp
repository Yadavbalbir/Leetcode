// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int h, int key){
        
        if(l==h){
            if(A[l]==key){
                return 0;
            }else{
                return -1;
            }
        }
    //complete the function here
        int left = l;
        int right = h;
        int mid = l + (h-l)/2;
        int peak;
       
       if(mid==0 && A[mid]>A[mid+1]){
                peak = mid;
        }else if(mid==0 && A[mid]<A[mid+1]){
            peak=mid+1;
        }else if(A[l]<A[h]){
            peak = h;
        }
        else{
            while(l<=h){
            
            
            if(A[mid-1]<A[mid] && A[mid]>A[mid+1]){
                peak = mid;
                break;
            }
            else if(A[mid]>A[0]){
                l=mid+1;
            }else{
                h=mid-1;
            }
            
            mid = l+(h-l)/2;
            
        }
    }
        
        // cout<<peak<<endl;
        
        if(key>=A[left]){
            right = peak;
            mid = left + (right - left)/2;
            // cout<<"mid bahar"<<mid<<endl;
            while(left<=right){
                if(A[mid]==key){
                    return mid;
                }
                else if(A[mid]<key){
                    left=mid+1;
                }else{
                    right = mid-1;
                }
                mid = left + (right-left)/2;
            }
        }else{
            left = peak+1;
            mid = left + (right - left)/2;
            while(left<=right){
                if(A[mid]==key){
                    return mid;
                }
                else if(A[mid]<key){
                    left=mid+1;
                }else{
                    right = mid-1;
                }
                mid = left + (right-left)/2;
            }
            
        }
        
        return -1;
    }
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends