#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr){
    for(int ele : arr){
        cout << ele << " ";
    }
    cout << endl;
}
int main(){
    vector<int> arr = {0,-5,0,-2,0,3,6,-3,0,4,8};
    int n = arr.size(); 
    print(arr);
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] == 0){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    print(arr);
}