#include <iostream>
#include <string>

int main() {
    // Declare an array of strings and initialize it with the given elements
    std::string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
    // Calculate the size of the array
    int size = sizeof(elements) / sizeof(elements[0]);

    // Iterate through the array and output elements starting with the letter "B"
    for (int i = 0; i < size; ++i) {
        if (!elements[i].empty() && elements[i][0] == 'B') {
            std::cout << elements[i] << std::endl;
        }
    }

    return 0;
}
