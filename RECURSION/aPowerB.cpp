#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int power(int m, int n){
    if (n == 0) return 1;
    int p = power(m, n/2);
    if (n % 2 == 0)return p * p;
    else return p * p * m; 
}
int main()
{
    int m, n;
    cout << "Enter m : ";
    cin >> m;
    cout << "Enter n : ";
    cin >> n;
    cout << power(m, n);
}

// BUILT-IN;

// int main(){
//     int m, n;
//     cout<<"Enter m : ";
//     cin>>m;
//     cout<<"Enter n : ";
//     cin>>n;
//     cout<<pow(m,n);
// }