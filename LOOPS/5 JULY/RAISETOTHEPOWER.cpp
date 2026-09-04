#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter base : ";
    cin>>a;
    int b;
    cout<<"Enter exponent : ";
    cin>>b;

    int rp = 1;
    for(int i = 1;i<=b;i++){
        rp *= a;
        if(a==1) break;
    }
    if(a==0 && b==0) cout<<"INDETERMINED TERM";
    else cout<<rp;
}