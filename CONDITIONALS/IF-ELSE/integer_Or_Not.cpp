#include <iostream>
using namespace std;
int main() {
    float n;
    cout << "Enter a real number: ";
    cin >> n;
    int o = (int)n;
    if (n == o)
        cout << "Integer";
    else
        cout << "Not an Integer";

}