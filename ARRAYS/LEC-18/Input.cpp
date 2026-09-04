#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size Of Array  : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array elements : ";
    // input;
    for(int i = 0; i<= n-1;i++){
        cin>>arr[i];
    }
    //print negative elements of array
    for(int i = 0;i<=n-1;i++){
        if(arr[i]<0) cout<<arr[i]<<" ";
    }
}