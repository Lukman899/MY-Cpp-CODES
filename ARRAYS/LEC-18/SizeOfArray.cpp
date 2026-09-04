#include <iostream>
using namespace std;
int main()
{
    // method 1;
    int marks[] = {3, 2, 9, 5, 7, 6, 2};
    cout << size(marks) << endl; // error in old c++ version
    // number of elements

    // method 2;
    int marks[] = {74, 96, 91, 57, 57, 62};
    cout << sizeof(marks) << endl; // total bites occupied

    // if divides by 4 (in int), gives number of elements{not the best solution}
}