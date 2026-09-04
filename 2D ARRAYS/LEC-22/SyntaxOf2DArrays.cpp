#include<iostream>
using namespace std;
int main(){
    // int arr[3][4];
    int arr[][4] = {{5,8,1,2}, {9,9,1,4}, {7,8,3,5}};\
                   // row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


                     //column wise;
    //     for(int j=0;j<4;j++){ 
    //     for(int i=0;i<3;i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}