# README.md

This repository contains solutions to the exercises from Chapter 4 of the CT60A2700 course. The tasks focus on summation, string manipulation, temperature conversion, element swapping, and ASCII value conversions in C.

## Exercises

### Exercise 1: Sum Until
- **Description**: Write a program that prompts the user to input an integer greater than 0, calculates the sum of all integers from 0 to that number, and prints the result. If the number is less than 0, a message is displayed, and the program stops.
- **Example Run**:
  ```
  Enter an integer greater than 0: 5
  Total sum: 15
  ```

### Exercise 2: Reverse String
- **Description**: Write a program that takes a string and reverses its contents in place.
- **Example Run**:
  ```
  Enter a string: Hello
  Reversed string: olleH
  ```

### Exercise 3: Temperature Conversion (Celsius to Fahrenheit)
- **Description**: Write a program that converts a given temperature in Celsius to Fahrenheit using the formula:
  \[
  \text{Fahrenheit} = \left(\text{Celsius} \times \frac{9.0}{5.0}\right) + 32.0
  \]
  The output should be printed rounded to 2 decimal places.
- **Example Run**:
  ```
  Enter temperature in Celsius: 25
  Temperature in Fahrenheit: 77.00
  ```

### Exercise 4: Let’s Swap!
- **Description**: Implement a program that swaps two elements of a string based on user-provided indices. The program checks if the indices are valid and prints the modified string or an error message if they are out of bounds.
- **Example Run**:
  ```
  Enter a string: Hello
  Enter index 1: 1
  Enter index 3: 3
  Modified string: Hlelo
  ```

### Exercise 5: ASCII Values
- **Description**: Create a menu-based program with two functions:
  - `char asciiToChar(int asciiValue)`: Converts an integer (ASCII value) to a character.
  - `int charToAscii(char c)`: Converts a character to its ASCII value.
  The program should run repetitively until the user selects 0 to stop.
- **Example Run**:
  ```
  Menu:
  1. Convert ASCII to Character
  2. Convert Character to ASCII
  0. Exit
  Enter your choice: 1
  Enter ASCII value: 65
  Character: A
  ```

## How to Use
1. Clone the repository.
2. Compile each program using a C compiler (e.g., `gcc`).
3. Run the compiled executables to test the functionality.

## Troubleshooting
- If you encounter issues with compilation, ensure you have a C compiler installed (e.g., `gcc` for Linux/macOS or MinGW for Windows).
- Make sure to enter valid inputs when prompted by the programs to avoid runtime errors.

## Contributing
Feel free to fork this repository, make changes, and submit pull requests. If you encounter any bugs or have suggestions for improvements, please open an issue.

---

Let me know if you'd like to add or change anything else!
