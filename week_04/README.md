# README.md

This repository contains solutions to the exercises from Chapter 5 of the CT60A2700 course. The tasks focus on array manipulation, counting, summation in 2D arrays, pointer arithmetic, and dynamic memory allocation in C.

## Exercises

### Exercise 1: Reversing an Array
- **Description**: Write a function `void reverseArray(int A[], int size)` that reverses the array `A`. The program should allow the user to input elements and print both the original and reversed arrays.
- **Example Run**:
  ```
  Enter the elements of the array (space-separated): 1 2 3 4 5
  Original array: 1 2 3 4 5
  Reversed array: 5 4 3 2 1
  ```

### Exercise 2: Count Even and Odd Numbers in an Array
- **Description**: Implement a function `void countNum(int a[], int size)` that counts how many numbers in the array are even and how many are odd. The program should prompt the user for input.
- **Example Run**:
  ```
  Enter the elements of the array (space-separated): 1 2 3 4 5
  Even numbers: 2
  Odd numbers: 3
  ```

### Exercise 3: Sum of the Numbers in a 2D Array
- **Description**: Write a function `int sumOfArray(int row, int col, int arr[row][col])` that returns the sum of all numbers in a 2D array. The program should ask for the number of rows and columns, prompt the user to enter the elements, and display the computed sum.
- **Example Run**:
  ```
  Enter number of rows: 2
  Enter number of columns: 3
  Enter elements row by row (space-separated):
  1 2 3
  4 5 6
  Total sum: 21
  ```

### Exercise 4: Find the Maximum Value Using Pointer Arithmetic
- **Description**: Define a function `int findMax(int *arr, int size)` that finds and returns the maximum value in an array using pointer arithmetic. The program should prompt the user for input and display the maximum value.
- **Example Run**:
  ```
  Enter the number of elements: 5
  Enter the elements: 10 20 30 40 50
  Maximum value: 50
  ```

### Exercise 5: Dynamic Memory Allocation
- **Description**: Write a program that includes a function `char **generateStrings(int n)` to dynamically create and return an array of strings. The program should ask the user for the number of strings, allocate memory, prompt for input, and print the strings.
- **Example Run**:
  ```
  Enter the number of strings: 3
  Enter string 1: Hello
  Enter string 2: World
  Enter string 3: Example
  Strings:
  Hello
  World
  Example
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
