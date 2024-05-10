#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <sstream>

using namespace std;

// Function to count the number of vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count the number of words in a string
int countWords(const std::string& str) {
    int count = 0;
    std::string word;
    std::istringstream iss(str);
    while(iss >> word) {
        count++;
    }
    return count;
}

// Function to reverse a string
void Reverse(std::string& str) {
    std::reverse(str.begin(), str.end());
}

// Function to capitalize the second letter of each word in a string
void capitalizeSecondLetter(std::string& str) {
    bool capitalize = false;
    for (char& c : str) {
        if (std::isalpha(c)) {
            if (capitalize) {
                c = std::toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
}

int main() {
    // Create and open a text file for appending
    ofstream file("com222.txt", std::ios::app);

    if (file.is_open()) {
        file << "This is the Advanced Computer Programming Module\n";
        file.close();
    } else {
        cout << "Unable to open file";
    }

    // Open the text file it was great
    std::ifstream readFile("com222.txt");
    std::string fileData;

    if (readFile.is_open()) {
        std::string line;
        while (std::getline(readFile, line)) {
            fileData += line;
        }
        readFile.close();

        // Count number of vowels
        int vowels = countVowels(fileData);
        std::cout << "Number of vowels: " << vowels << std::endl;

        // Count number of words
        int words = countWords(fileData);
        std::cout << "Number of words: " << words << std::endl;

        // Reverse the statement
        Reverse(fileData);
        std::cout << "Reversed statement: " << fileData << std::endl;

        // Capitalize the second letter of each word
        capitalizeSecondLetter(fileData);
        std::cout << "Capitalized statement: " << fileData << std::endl;

    } else {
        std::cout << "Failed to open file" << std::endl;
    }

    return 0;
}
