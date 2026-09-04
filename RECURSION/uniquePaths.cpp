#include <iostream>
using namespace std;
void Paths(int m, int n, string s){
   if(m == 1 && n == 1){
    cout<<s<<endl;
    return;
}
    if(m == 0 || n == 0)  return;
    Paths(m, n-1, s + "R"); // RIGHT
    Paths(m-1, n, s + "D"); // DOWN
   } 
int main(){
int m, n;
cout<<"Enter ROWS & COLUMNS : ";
cin>>m>>n;
Paths(m, n,"");
}