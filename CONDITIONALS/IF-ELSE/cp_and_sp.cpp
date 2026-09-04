#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost price : ";
    cin>>cp;
    int sp;
    cout<<"Selling price : ";
    cin>>sp;
    if(sp>cp)
    cout<<"profit";
    // if(sp<cp)
    // cout<<"Loss";
    // if(sp==cp)
    // cout<<"No Profit No Loss";
    // cout<<endl<<sp-cp<<endl;
    else if(sp<cp)
    cout<<"Loss";
    else if(sp==cp)
    cout<<"No Profit No Loss";
    cout<<endl<<sp-cp<<endl;
}