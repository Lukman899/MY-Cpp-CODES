#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "LUKMAN SHAIKH";
    int n = s.size();

        // FOR LOOP;

    for(int i = 0; i < n; i++){
        cout<<s[i];
    }
    cout<<endl;

        // FOR EACH LOOP;

    for(char ch : s){
        cout<<ch;
    }
}