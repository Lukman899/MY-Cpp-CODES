#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<string> arr = {"012", "865", "641", "00021", "879", "00234"};
    string max = arr[0];
    for (int i = 1; i < arr.size(); i++){
        if (stoi(arr[i]) > stoi(max))
            max = arr[i];
    }
    cout << max << endl;
}