#include<iostream>
using namespace std;
void fun(int x, float y){
    cout<<"Sahib"<<endl;
}
void fun(float y, int  x){
    cout<<"Dhruv"<<endl;
}
int main(){
    fun(18, 3.14);
    fun(3.14, 18);
    // fun(14, 18); ERROR
} 