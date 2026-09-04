#include<iostream>
using namespace std;
int main(){
    for(int i = 1;i<=100;i++) // loop worked 100 iterations.
    if(i%2==0) cout<<i<<" "<<endl;

    for(int j=2;j<=100;j+=2) // loop worked 50 iterations
    cout<<j; //even number

    for (int k=1;k<=50;k++)
    cout<<k*2<<" ";

    for(int l=1;l<=100;l++)
    cout<<l<<" "; // odd number
}