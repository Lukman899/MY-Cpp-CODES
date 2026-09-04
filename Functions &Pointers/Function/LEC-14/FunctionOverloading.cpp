#include<iostream>
using namespace std;
void fun(){
    cout<<"Hi"<<endl;
}
void fun(int x){
// void fun(int x = 7){ // error
    cout<<"Good Morning"<<endl;
}
void fun(int x, int y){
    cout<<"Good Evening"<<endl;
}
int main(){
    fun();
}