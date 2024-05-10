#include <iostream>
using namespace std;

int main() {
    int numbersArray[5];

    int* p = numbersArray; // declare and initialize the pointer

    *p = 10; // assign a value to the first element
    p++; // increment the pointer
    *p = 20; // assign a value to the second element

    p = &numbersArray[2]; // assign the address of the third element to the pointer
    *p = 30; // assign a value to the third element

    p = numbersArray + 3; // assign the address of the fourth element to the pointer
    *p = 40; // assign a value to the fourth element

    p = numbersArray; // assign the address of the first element to the pointer
    *(p+3) = 50; // assign a value to the fifth element

    // iterate and output all the elements in the array
    for (int n = 0; n < 5; n++) {
        cout << numbersArray[n] << ", ";
    }

    return 0;
}