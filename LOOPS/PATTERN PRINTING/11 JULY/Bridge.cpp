#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;

    // First row
    for (int i = 1; i <= 2 * n - 1; i++) {
        cout << "* ";
    }
    cout << endl;
    n--;
    // Remaining rows
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n+1-i; j++) {
            cout << "* ";
        }

        // Middle spaces
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "  ";
        }

        // Right stars
        for (int j = 1; j <= n+1-i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}