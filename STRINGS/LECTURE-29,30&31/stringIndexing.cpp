#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "LUKMAN SHAIKH";
    cout<<s.length()<<endl;
    // cout<<s.size()<<endl;
    cout<<s[1]<<endl;
    cout<<s<<endl;
    s[0] = 'Q';
    cout<<s<<endl;
}