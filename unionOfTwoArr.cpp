// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int t=m+n;
        int c[t];
        int temp=0;

        for(int i=0;i<t;i++){
            if(i>=n){
                c[i]=b[i-n];
            }
            else{
                c[i]=a[i];
            }
        }
        sort(c,c+t);
        
        for(int i=0;i<t;i++){
            if(c[i]!=c[i+1]){
               temp++;
            }
        }
        return temp;
    }
    
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends