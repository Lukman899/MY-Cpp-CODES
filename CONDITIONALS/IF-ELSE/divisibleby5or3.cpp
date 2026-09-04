#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n % 3 == 0 or n % 5 == 0) 
    cout<<"divisible by 5 or 3";
    else cout<<"not divisible by 5 or 3";
}