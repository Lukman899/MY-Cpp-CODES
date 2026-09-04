#include<iostream>
using namespace std;
int main(){
    int x = 5, y = 2, z = 9;
    // int* p1 = &x, p2 = &y; gives error;
    // *p2 = &y; solution;
    //but below one is recommented;
    int* p2 = &y;
}