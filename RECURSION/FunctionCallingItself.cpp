#include <iostream>
using namespace std;
// void deeksha(int n){
//     if(n==0) return; // 3 times
//     cout<<"deeksha"<<endl;
//     deeksha(n-1);
// }
// int main(){
//     deeksha(3);
// }
void deeksha(int n){
    cout<<"deeksha"<<endl; // 4 times
    if(n==0) return;
    deeksha(n-1);
}
int main(){
    deeksha(3);
}