# README.md

This repository contains solutions to the exercises from Chapter 11 of the CT60A2700 course.  
The tasks focus on mathematical computations, character handling, string manipulation, time-based functions, and sorting using standard C libraries.

---

## Exercises

### Exercise 1: Circular Arc Length Calculator  
**Description:**  
Write a C program that calculates the arc length of a circle segment based on the radius `r` and central angle `α` (in degrees).  
Use the formula:  
`L = π * r * α / 180`  
Use the constant `M_PI` from `<math.h>` for π. Output the result with exactly two decimal places.

---

### Exercise 2: Projectile Motion Simulator  
**Description:**  
Simulate a projectile thrown from ground level with initial velocity `v` and angle `θ` (in radians).  
Calculate:
- Maximum height `H = v² * sin²(θ) / (2 * g)`
- Total flight time `T = 2 * v * sin(θ) / g`

Use `g = 9.8 m/s²`. Output both `floor()` and `ceil()` versions with 2 decimal precision.

---

### Exercise 3: Current Time Reader  
**Description:**  
Use `<time.h>` to print the current:
- Year
- Month
- Day
- Hour
- Minute
- Second  
Also print a formatted time string using `strftime`.

---

### Exercise 4: Code Execution Timer  
**Description:**  
Measure the time taken to execute a loop:
```c
for (unsigned long i = 0; i < 10000000000; i++) {}
```
Use `clock()` to determine execution time in seconds.

---

### Exercise 5: Character Classifier  
**Description:**  
Ask the user for a single character input.  
Determine and print whether it is:
- An alphabetic character (uppercase or lowercase)
- A digit
- A punctuation character  
Use functions like `isalpha()`, `isdigit()`, and `ispunct()`.

---

### Exercise 6: Letter Case Reverser  
**Description:**  
Read a sentence (up to 100 characters).  
Convert all uppercase letters to lowercase and vice versa.  
Use standard library character functions.

---

### Exercise 7: Strange Calculator  
**Description:**  
Ask the user to input a string.  
Convert it to an integer using `atoi()`, and print:
- Original integer
- Absolute value using `abs()`  
If the string is invalid (e.g. contains non-numeric characters), print an error message.

---

### Exercise 8: Random Lucky Numbers  
**Description:**  
Generate 5 random integers between 1 and 100 using:
- Seed: `42`
- Formula: `rand() % 100 + 1`  
Output should be the same every time the program is run.

---

### Exercise 9: Student Score Sorter  
**Description:**  
Ask the user to input 5 student grades (integers).  
Sort them in **descending order** using `qsort()` and a custom comparison function:
```c
int compare_desc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}
```
Print the sorted results.

---


## How to Use

### Compile and Run  
For each individual exercise:
```bash
gcc exercise1.c -o exercise1 -lm
./exercise1
```
(Use `-lm` to link the math library if needed.)

To compile all exercises at once:
```bash
gcc *.c -o chapter11 -lm
./chapter11
```

---

## Troubleshooting
- Ensure all output matches the formatting and precision shown in the examples.
- Use provided constants (e.g., `M_PI`, `g = 9.8`) and standard library functions as required.
- Do not redefine standard constants or modify function templates if given.
- Use `floor()`, `ceil()`, `isalpha()`, `time.h`, `qsort()` etc., as specified.
- If you run into problems, ask in the **"Ask from everybody"** channel on Moodle.

---

## Contributing  
Feel free to fork this repository, improve the code, and submit pull requests.  
If you find bugs or have suggestions, please open an issue.
```
