#include<iostream>
using namespace std;
int main(){
int arr[] = {74, 96, 9, 57};
    int n = sizeof(arr)/4;
    int max = INT_MIN;
    for(int i=0;i<=n;i++){
        if(arr[i]>max) max = arr[i];
    }
    cout<<max;


//method 2;

// int arr[] = {74, 96, 9, 57};
//     int n = sizeof(arr)/4;
//     int max = arr[0];
//     for(int i=0;i<=n;i++){
//         if(arr[i]>max) max = arr[i];
//     }
//     cout<<max;
}