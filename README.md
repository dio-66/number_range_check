# number_range_check

This program allows you to check if an integer is between 10 and 20 (inclusive). It provides a simple user interface for entering an integer and displays whether the number falls within the specified range.

## Usage

1. Run the program.
2. Enter an integer when prompted.
3. The program will determine if the number is between 10 and 20 (inclusive) and display the result.
4. After displaying the result, you will be asked if you want to continue.
   - Enter 'Y' to check another integer.
   - Enter 'N' to exit the program.

## How it works

1. The program prompts the user to enter an integer.
2. It uses the `isBetween10And20` function to check if the number is within the range.
3. The result is displayed on the screen.
4. The program then asks the user if they want to continue.
5. If the user enters 'Y', the program repeats the process.
6. If the user enters 'N', the program exits.
   - Any other input will be considered invalid and the user will be prompted again.

## Function Explanation

The `isBetween10And20` function checks if a given integer is between 10 and 20 (inclusive).

```cpp
bool isBetween10And20(int num) {
    return (num >= 10 && num <= 20);
}
