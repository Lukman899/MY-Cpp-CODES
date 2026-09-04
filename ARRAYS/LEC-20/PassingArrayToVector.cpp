#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int>& v){
    v[2] = 99;
}
int main(){
    vector<int> v = {4,3,8,2,9};
    change(v);
    cout<<v[2]<<endl;
}