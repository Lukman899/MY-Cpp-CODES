#include<iostream>
using namespace std;
int main(){
int arr[] = {74, 96, 9, 57};
    int n = sizeof(arr)/4;
    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mn) mn = arr[i];
    }
    cout<<mn;
}