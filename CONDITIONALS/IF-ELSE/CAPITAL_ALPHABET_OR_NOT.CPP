#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter an alphabet : ";
    cin>>ch;
    if(ch >= 65 && ch<90) 
    cout<<"capital alphabet";
    else
    cout<<"Not an capital alphabet";
}