#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n / 4; i++){
        swap(s[i], s[n / 2 - 1 - i]);
    }
    cout <<s<< endl;
    return 0;
}