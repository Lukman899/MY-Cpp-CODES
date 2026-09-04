#include<iostream>
using namespace std;
int main(){
int arr[] = {74, 96, 9, 57};
    int n = sizeof(arr)/4;
    int Product = 1;
    for(int i = 0;i<=n;i++){
        Product *=arr[i];
    }
    cout<<Product;
}
