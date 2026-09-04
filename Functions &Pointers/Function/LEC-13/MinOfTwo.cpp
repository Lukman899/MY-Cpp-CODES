#include<iostream>
using namespace std;
void minOfTwo(int a, int b){ //will receive two nums and will print min of them...;
    if(a<b) cout<<a<<" "<<"is smaller"<<endl;
    else cout<<b<<" "<<" is smaller"<<endl;
}
int main(){
    minOfTwo(7,34);
}