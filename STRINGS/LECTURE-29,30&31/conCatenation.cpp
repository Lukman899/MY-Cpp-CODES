#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "111";
    string s2 = "222";
    string s3 = s1 + s2; // + IS WORKING AS CHIPKAANE WALA DEVICE;
    cout<<s3;


    string s = "abc";
    // string x = s + 4; // ERROR
    string x = s + '4'; 
    cout<<x<<endl;

    string s4 = "Lukman ";
    s4 += "Shaikh";
    cout<<s4<<endl;
}