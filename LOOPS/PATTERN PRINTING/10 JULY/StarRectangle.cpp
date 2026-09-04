++++++++++++#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter rows : ";
    cin>>a;
    int b;
    cout<<"Enter Columns : ";
    cin>>b;
    for(int i = 1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}