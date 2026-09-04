#include<iostream>
using namespace std;
int main(){
int arr[] = {74, 96, 9, 57, 9, 9};
    int n = sizeof(arr)/4;
    int target;
    cout<<"Enter Target : ";
    cin>>target;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
        flag = true;
        break;
        }
    }
    if(flag == true) cout<<"Element Found "<<endl;
    else cout<<"Element Not Found ";
    

}