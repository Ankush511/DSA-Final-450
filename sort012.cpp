#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
       int ai=0,b=0,c=0;
       for(int i=0;i<n;i++){
           if(a[i]==0){
               ai++;
           }
           else if(a[i]==1){
               b++;
           }
           else if(a[i]==2){
               c++;
           }
       }
       for(int i=0;i<n;i++){
           if(ai--&&ai>=0){
               a[i]=0;
           }else if(b--&&b>=0){
               a[i]=1;
           }else if(c--&&c>=0){
               a[i]=2;
           }
       }
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends