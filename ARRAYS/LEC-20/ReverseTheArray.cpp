#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr){
    for(int ele: arr) cout<<ele<<" ";
    cout<<endl;
}
int main(){
    vector<int> arr = {10,20,30,40,50,60,70};
    int i = 0, j = arr.size() - 1;
    print(arr);

    print(arr);
}