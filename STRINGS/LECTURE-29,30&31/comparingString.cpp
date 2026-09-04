#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string x = "abc";
    string y = "xyz";
    // string y = "Abc";
    if (x == y)
        cout << "same" << endl;
    else
        cout << "Not Same" << endl;

    if (x > y)
    {
        cout << x << " is greater than " << y << endl;
    }
    else
        cout << y << " is greater than " << x << endl;
}