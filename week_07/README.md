# README.md

This repository contains solutions to the exercises from Chapter 8 of the CT60A2700 course.  
The tasks focus on modular programming with multiple C files and creating a static library using `ar`.

## Exercises

### Exercise 1: Simple Calculator Program
**Description:**  
Create a simple calculator program that performs basic arithmetic operations: addition, subtraction, multiplication, and division.  
Each operation must be implemented in its own `.c` file with the corresponding `.h` file.

**Instructions:**  
1. Download the header files from Moodle (`add.h`, `subtract.h`, `multiply.h`, `divide.h`).  
2. Implement the following source files:
    - `add.c` → defines `int add(int a, int b);`
    - `subtract.c` → defines `int subtract(int a, int b);`
    - `multiply.c` → defines `int multiply(int a, int b);`
    - `divide.c` → defines `float divide(int a, int b);`
3. For `divide.c`, if `b` is zero, print an error message and return `0.0`:
    ```c
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0.0;
    }
    ```

4. The provided `main.c` (already uploaded in CodeGrade) will test your functions.

**Example Output 1:**  
```
Enter first number: 10
Enter second number: 5
Sum: 15
Difference: 5
Product: 50
Quotient: 2.0
```

**Example Output 2 (Division by zero):**  
```
Enter first number: 10
Enter second number: 0
Sum: 10
Difference: 10
Product: 0
Error: Division by zero
Quotient: 0.0
```

**Submission:**  
- Upload `add.c`, `subtract.c`, `multiply.c`, and `divide.c` to CodeGrade.

---

### Exercise 2: Static Library
**Description:**  
Create a static library `libmy_functions.a` containing the object codes from Exercise 1.

**Instructions:**  
1. Compile the source files into object files:
    ```bash
    gcc -c add.c subtract.c multiply.c divide.c
    ```
2. Create a static library using `ar`:
    ```bash
    ar rcs libmy_functions.a add.o subtract.o multiply.o divide.o
    ```
3. Submit the `libmy_functions.a` file to CodeGrade.

**Notes:**  
- The `main.c` file in CodeGrade will link against your static library.
- Example runs and output are the same as in Exercise 1.

**Reference:**  
Detailed instructions on creating a static library are provided in [Create_static_library.pdf](https://moodle.lut.fi/pluginfile.php/2505445/mod_label/intro/Create_static_library.pdf).

---

## How to Use
- Compile and run using `gcc` and link to the static library if needed.

Example for Exercise 1:  
```bash
gcc main.c add.c subtract.c multiply.c divide.c -o calculator
./calculator
```

Example for Exercise 2 (with static library):  
```bash
gcc main.c -L. -lmy_functions -o calculator
./calculator
```

## Troubleshooting
- Ensure that you download and correctly include the provided header files.
- Make sure all function names match exactly as specified.
- Handle division by zero carefully to avoid runtime errors.

## Contributing
Feel free to fork this repository, make changes, and submit pull requests.  
If you encounter bugs or have suggestions for improvement, please open an issue.
