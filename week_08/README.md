# README.md

This repository contains solutions to the exercises from **Chapter 9** of the **CT60A2700** course.  
The tasks focus on modular programming with multiple C files, proper compilation practices, and using a Makefile.

---

## Exercises

### Exercise 1: Simple Calculator Program with Makefile

**Description:**  
Create a simple calculator program that performs basic arithmetic operations: addition, subtraction, multiplication, and division.  
Each operation is implemented in its own `.c` file with the corresponding `.h` file. You will also create a Makefile to automate compilation.

---

### Instructions

#### Step 1: Implement Source Files
- Download the header files from Moodle:
  - `add.h`
  - `subtract.h`
  - `multiply.h`
  - `divide.h`
  
- Implement the following source files:
  - `add.c` → defines `int add(int a, int b);`
  - `subtract.c` → defines `int subtract(int a, int b);`
  - `multiply.c` → defines `int multiply(int a, int b);`
  - `divide.c` → defines `float divide(int a, int b);`

For `divide.c`, if `b` is zero, print an error message and return `0.0`:
```c
if (b == 0) {
    printf("Error: Division by zero\n");
    return 0.0;
}
```

The provided `main.c` (already uploaded to CodeGrade) will test your functions.

---

#### Step 2: Create a Makefile
- Compile each `.c` file into an object file (`.o`).
- Link all `.o` files into a single executable called `calculator`.
- Create a `clean` target that removes all `.o` files and the `calculator` executable.

**Example commands:**
```bash
make        # Build the program
make clean  # Remove compiled files
```

---

### Example Output 1
```
Enter first number: 10
Enter second number: 5
Sum: 15
Difference: 5
Product: 50
Quotient: 2.0
```

### Example Output 2 (Division by Zero)
```
Enter first number: 10
Enter second number: 0
Sum: 10
Difference: 10
Product: 0
Error: Division by zero
Quotient: 0.0
```

---

## Submission

- Upload your `add.c`, `subtract.c`, `multiply.c`, `divide.c`, and `Makefile` to CodeGrade.
- **Deadline:** March 17, 2025, 23:59.
- Correct solutions will be reviewed in the practice session on March 18.

---

## How to Use

### Compile and Run

Using Makefile:
```bash
make
./calculator
```

Cleaning up generated files:
```bash
make clean
```

Manual compilation without Makefile (not recommended):
```bash
gcc -c add.c subtract.c multiply.c divide.c main.c
gcc -o calculator add.o subtract.o multiply.o divide.o main.o
./calculator
```

---

## Troubleshooting

- Make sure you **only upload** your `.c` files and Makefile, **not the header files** or `main.c`.
- Ensure that all function names exactly match the specifications.
- Handle division by zero carefully to avoid runtime errors.
- If encountering problems, ask for help on the "Ask from everybody" channel in Moodle.

---

## Contributing

Feel free to fork this repository, make improvements, and submit pull requests.  
If you find bugs or have suggestions, feel free to open an issue!

