#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
    int l=0,h=n-1;

    while(l<h){
        int temp=arr[l];
        arr[l]=arr[h];
        arr[h]=temp;
        l++;
        h--;
    }
    
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};

    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    reverseArray(arr,9);
    
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}