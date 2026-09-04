#include<iostream>
#include<string>
using namespace std;
int main(){
        // WHAT IS STRING?

        // STRING IS A TEXT WHICH IS WRITTEN BETWEEN DOUBLE QUOTES AND IS PRINTED AS IT IS IN OUTPUT;

    // string x = "LUKMAN IS A STUDENT";
    // cout<<x<<endl;

    // cout<<"Lukman";

        // HOW TO TAKE IT'S INPUT?

    string s;
    cout<<"ENTER A STRING : ";
    // cin>>s; WILL ONLY WORK FOR A SINGLE WORD;
    getline(cin,s);
    cout<<s;

        // CAN DIGITS FIXED IN STRING?

    string x = "456464"; //YES. IT CAN BE (IF WRITTEN IN  " "...)
    cout<<x;
}