#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int y = 8;
    cout<<&x<<endl;  // 0x36fc3ffd4c  0x879a1ffb3c changes on every run;
     cout<<&y<<endl;  //the add of two variables can never be same;
}