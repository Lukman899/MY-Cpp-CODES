#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    // a = 2;
    // d = 3;

    //with maths

    // a=2
    // d=3

    //2 5 8 11 14 17


    // for(int i=2;i<=3*n-1;i+=3)
    // cout<<i<<" ";

    //With formula

    // for(int i=1; i<=n; i++)
    // cout<<3*i-1<<" ";

    //without formula

    int a = 2, d = 3;
    for(int i=1; i<=n; i++){
    cout<<a<<" ";
    a += d;
    }
}