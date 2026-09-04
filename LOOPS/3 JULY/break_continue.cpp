#include<iostream>
using namespace std;
int main(){

    //break :- ends loop


    // for(int i = 1; i<=10; i++){
    // if(i==5) break;
    // cout<<i<<" ";
    // for(int i = 1; i<=10; i++){
    // cout<<i<<" ";
    // if(i==5) break; //5 break hone ke baad print nai ho sakta but 5 print hone ke baad break ho sakta hai

    //continue:- it ignores

    for(int i = 1; i<=10; i++){
    if(i%4==0) continue;
    cout<<i<<" ";


    }
}