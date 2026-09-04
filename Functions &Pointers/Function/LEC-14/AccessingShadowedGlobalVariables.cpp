#include<iostream>
using namespace std;
int x = 8;
int main(){
    int x = 56; // aisa kya kiya jaye ki global x print ho?
    cout<<x<<endl;
    cout<<::x<<endl; //scope resolution operator;
}