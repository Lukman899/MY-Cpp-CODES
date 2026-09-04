#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter 3 numbers : ";
    cin>>a>>b>>c;
    // if(a>=b && a>=c) //better
    // cout<<"a is greatest";
    // else if(b>=a && b>=c) 
    // cout<<"b is greatest";
    // else
    // cout<<"c is greatest";
    if(a>b){
        if(a>c){
        cout<<"a is largest";
        }
        else{
            cout<<"c is largest";
        }
}
    else{
        if(b>= c) 
        cout<<"b is largest";
        else
            cout<<"c is largest";
    }

}