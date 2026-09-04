#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    bool flag = false;
    int factor = 0;
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i==0){
        factor++;
        flag = true;
        break;
        }
    }
    if(flag == true) cout<<"Composite";
    else cout<<"prime";
   
}