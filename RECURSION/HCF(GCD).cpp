#include <iostream>
using namespace std;

        // BAD TC (NO RECURSIVE)
// int HCF(int a, int b){
//    for(int i = min(a, b); i >= 1; i--){
//         if(a % i == 0 and b % i == 0) return i;
//    }
//    return 1;
// }
        // RECURSIVE

int HCF(int a, int b){
   if(a == 0) return b;
   return HCF(b%a, a);
}
int main(){
int a, b;
cout<<"Enter Two Numbers : ";
cin>>a>>b;
cout<<HCF(a, b);
}