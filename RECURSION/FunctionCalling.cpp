// #include <iostream>
// using namespace std;

// void aryan() {
//     cout << "Aryan" << endl;
// }

// void param() {
//     cout << "Param" << endl;
//     aryan();
// }

// void Kartik() {
//     cout << "Kartik" << endl;
//     param();
// }

// int main() {
//     Kartik();
//     param();
//     aryan();
// }

//OUTPUT
//KARTIK
//PARAM
//ARYAN
//PARAM
//ARYAN
//ARYAN
#include <iostream>
using namespace std;

void aryan() {
    cout << "Aryan" << endl;
}

void param() {
    aryan();
    cout << "Param" << endl;
    aryan();
}

void Kartik() {
    aryan();
    cout << "Kartik" << endl;
    param();
}


int main() {
    Kartik();
    param();
    aryan();
}

