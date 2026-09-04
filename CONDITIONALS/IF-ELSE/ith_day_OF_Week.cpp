#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    //by if else ladder

    // if(n==1)cout<<"Monday";
    //     else if cout<<"Tuesday";








    switch (n)
    {
        case 1:cout<<"Monday"; break;
        case 2:cout<<"Tuesday"; break;
        case 3:cout<<"wednesday"; break;
        case 4:cout<<"Thursday"; break;
        case 5:cout<<"Friday"; break;
        case 6:cout<<"Saturday"; break;
        case 7:cout<<"Invalid day"; break;
    }
    
}