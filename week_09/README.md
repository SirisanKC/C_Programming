# README.md

This repository contains solutions to the exercises from **Chapter 10** of the **CT60A2700** course.  
The tasks focus on using **function pointers**, **dynamic operations**, **string processing**, and simulating **object-oriented behavior** in C.

---

## Exercises

### Exercise 1: Arithmetic Operations with Function Pointers

**Description:**  
Write a C program that uses **function pointers** to perform basic arithmetic operations: addition, subtraction, multiplication, and division.  
The user should be able to select an operation dynamically at runtime.

- For division, if the divisor (`b`) is zero, the program must print:
  ```
  Error: Division by zero
  ```
  and return `0.0` to the main program.

- You must **include** the provided code snippet exactly as instructed without modifications.

---

### Exercise 2: Function Pointer as a Function Parameter

**Description:**  
Write a C program that demonstrates **passing function pointers as parameters** to another function.  
You will implement and use multiple transformation functions for integers.

- Pass both the function pointer and the function’s name as parameters.
- Include the provided code snippet without modifications.

---

### Exercise 3: String Processing System Using Function Pointers

**Description:**  
Implement a string processing system where users can choose different transformations for a string.

Required functions:
- `void toUpperCase(char *str)`: Converts a string to uppercase.
- `void toLowerCase(char *str)`: Converts a string to lowercase.

You must use an **array of function pointers** as follows:
```c
void (*stringFunctions[])(char*) = {toUpperCase, toLowerCase};
```

Your `main()` must include the two mandatory lines given in the instructions.

---

### Exercise 4: Student’s Grade Management System

**Description:**  
Simulate object-oriented behavior in C by using structures and function pointers.

Define a `Student` structure with:
- Student’s name
- Grades for five courses
- Function pointers for showing student information and calculating GPA

Required functions:
- `void show(Student s)`: Displays the student’s details.
- `float countGPA(Student s)`: Calculates and returns the student’s GPA.
- `void ConstructStudent(Student *s)`: Acts as a constructor to initialize student data and assign function pointers.

The provided `main()` function **must not be modified**.

---

## Submission

- Upload all your `.c` files to CodeGrade.
- **Deadline:** March 24, 2025, 23:59.
- Correct solutions will be reviewed during the practice session on March 25.

---

## How to Use

### Compile and Run
For each exercise:
```bash
gcc exercise1.c -o exercise1
./exercise1
```
Similarly for `exercise2.c`, `exercise3.c`, `exercise4.c`.

If combining all exercises into a project:
```bash
gcc *.c -o project
./project
```

---

## Troubleshooting

- Carefully use the **exact function names and parameters** as specified.
- Do **not modify** the provided code snippets or the main function where instructed.
- Handle division by zero carefully to avoid program crashes.
- If encountering problems, seek help in the "Ask from everybody" channel on Moodle.

---

## Contributing

Feel free to fork this repository, make improvements, and submit pull requests.  
If you find bugs or have suggestions, please open an issue!

