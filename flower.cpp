#include <iostream>
using namespace std;

int main() {
    int n = 5; // Size of the flower

    // Upper part of the flower
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "@ ";
        }
        cout << endl;
    }

    // Lower part of the flower
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "@ ";
        }
        cout << endl;
    }

    // Stem of the flower
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << " ";
        }
        cout << "@" << endl;
    }

    return 0;
}