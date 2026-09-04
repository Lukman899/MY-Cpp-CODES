#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            // cout<<min(i, j)<<" ";
            if(i<j) cout<<i<<" ";
            else cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            
        }
        cout<<endl;
    }
}