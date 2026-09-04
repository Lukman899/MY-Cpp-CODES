// method 1 {INTERCHANGE (BEST)};

#include<iostream>
using namespace std;
// void print(int n){
//     if(n == 0) return;
//     print(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     print(n);
// }

//method 2 {GLOBAL VARIABLE (GOOD BUT MORE TC)};
// int n;
// void print(int x){
//     if(x > n) return;
//     cout<<x<<" ";
//     print(x+1);
// }
// int main(){
//     cout<<"Enter n : ";
//     cin>>n;
//     print(1);
// }

// method 3 {2 PARAMETERS (WORST)}

void print(int x, int n){
    if(x > n) return;
    cout<<x<<" ";
    print(x+1, n);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    print(1, n);
}