#include <iostream>     // For input/output stream
#include <string>       // For string handling
#include <cctype>       // For character manipulation functions
#include <algorithm>    // For string transformation functions


// Function to check if a given integer is between 10 and 20 (inclusive)
bool isBetween10And20(int num) {
    return (num >= 10 && num <= 20);
}

int main() {
    std::string choice; // Holds user's choice (Y/N) as a string

    do {
        int number;
        std::cout << "Enter an integer: ";
        std::cin >> number;

        if (isBetween10And20(number)) {
            std::cout << number << " is between 10 and 20 (inclusive)." << std::endl;
        }
        else {
            std::cout << number << " is not between 10 and 20 (inclusive)." << std::endl;
        }

        // Prompts user for continuation and validate inputs
        while (true) {
            std::cout << "Do you want to continue? (Y/N): ";
            std::cin >> choice;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
            std::transform(choice.begin(), choice.end(), choice.begin(), ::toupper);

            if (choice == "Y" || choice == "N") {
                break;
            }
            else {
                std::cout << "Invalid input. Please enter either 'Y' or 'N'." << std::endl;
            }
        }

    } while (choice == "Y");

    return 0;
}
