#include <iostream>
using namespace std;

int main() {
    int a, b, i = 0;

    cout << "Enter first dimension array length, it must not exceed 3: ";
    cin >> a;

    // Validate first dimension input
    while (a > 3) {
        if (i == 0) {
            cout << "Sorry, you have entered an invalid first dimension array length. Please try again." << endl;
        } else {
            cout << "You entered: " << a << ", please enter first dimension array length between 0 and 3." << endl;
        }
        cin >> a;
        i++;
    }

    cout << "Enter second dimension array length, it must not exceed 3: ";
    cin >> b;

    i = 0;
    // Validate second dimension input
    while (b > 3) {
        if (i == 0) {
            cout << "Sorry, you have entered an invalid second dimension array length. Please try again." << endl;
        } else {
            cout << "You entered: " << b << " as a dimension array length. Please enter second dimension array length between 0 and 3." << endl;
        }
        cin >> b;
        i++;
    }

    // Create the two-dimensional array
    double** twoDimArray = new double*[a];
    for (int i = 0; i < a; i++) {
        twoDimArray[i] = new double[b];
    }

    // Input elements into the array
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << "Enter element at index [" << i << "] [" << j << "]: ";
            cin >> twoDimArray[i][j];
        }
    }

    // Output the elements of the array
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << "Element at index [" << i << "] [" << j << "]: " << twoDimArray[i][j] << endl;
        }
    }

    // Deallocate memory
    for (int i = 0; i < a; i++) {
        delete[] twoDimArray[i];
    }
    delete[] twoDimArray;

    return 0;
}