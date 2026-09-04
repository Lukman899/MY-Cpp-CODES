#include<iostream>
void change(int x){
    x = 20;
}
using namespace std;
int main(){
    int x = 10;
    change(x);
    cout<<x<<endl;
}