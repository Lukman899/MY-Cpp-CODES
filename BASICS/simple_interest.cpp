#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter PRINCIPAL : ";
    cin>>p;
    cout<<"Enter RATE : ";
    cin>>r;
    cout<<"Enter TIME : ";
    cin>>t;
    float si = (p*r*t)/100;
    cout<<"simple interest is : "<<si;
    
}