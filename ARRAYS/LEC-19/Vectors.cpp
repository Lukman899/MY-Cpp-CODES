#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5, 7); //index 0 to 4; // if you include , and digit after it, it will default value;
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(5); // adds an element at last
    arr.pop_back();
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}