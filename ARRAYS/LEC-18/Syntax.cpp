#include<iostream>
using namespace std;
int main(){
    int marks[] = {74, 96, 91, 57, 62, 35}; // elements
    cout<<marks[2]<<endl;
    marks[2] = 23; // updation
    cout<<marks[2]<<endl;
    cout<<"Enter 2 : "; // input
    cin>>marks[2];
    cout<<marks[2];
}