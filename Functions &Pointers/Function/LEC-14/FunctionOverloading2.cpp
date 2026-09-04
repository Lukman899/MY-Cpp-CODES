#include<iostream>
using namespace std;
void fun(int x){
    cout<<"This is int"<<endl;
}
void fun(double x){
// void fun(int x = 7){ // error
    cout<<"This is double"<<endl;
}
void fun(char x){
    cout<<"This is char"<<endl;
}
int main(){
    fun(7); // is bracket me jo likhunga wo hisaab se output print hoga;
}