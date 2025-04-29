# README.md

This repository contains solutions to the exercises from Chapter 12 of the CT60A2700 course.  
These tasks emphasize binary file operations, bit manipulation, and implementing constraints on control structures in C.

---

## Exercises

### Exercise 1: Binary File Writer and Reader  
**Description:**  
Ask the user to input a string (max 49 characters + null terminator).  
- Write the string (including the null character) to a binary file named `string.bin`.  
- Reopen the file and append an integer entered by the user.  
- Reopen the file again, read and print the content (both string and integer).  
Follow the given output format exactly.

---

### Exercise 2: Binary File Reader (students.bin)  
**Description:**  
Read and print only the **third structure** from a binary file `students.bin` containing:
```c
struct Student {
    int ID;
    char name[50];
    float GPA;
};
```
Constraints:
- Only `<stdio.h>` may be used.
- Use `fseek()` to jump to the third structure.
- Read and print **only one** structure.

---

### Exercise 3: Bit Counter  
**Description:**  
Implement the function:
```c
int countUpBits(unsigned int num);
```
This function returns the number of `1` bits in the binary representation of a given unsigned integer.  
Ask the user for a non-negative integer and print the result.

---

### Exercise 4: Print Binary Representation  
**Description:**  
Implement the function:
```c
void printBinary(unsigned int num);
```
This function prints the 32-bit binary representation of a given unsigned integer using **bitwise right-shifting**.  
The program asks for a non-negative integer from the user and prints the result.

---

### Exercise 5: Power of Two Checker  
**Description:**  
Implement the function:
```c
int isPowerOfTwo(unsigned int num);
```
Returns `1` if `num` is a power of two, otherwise `0`.  
**Restrictions:**
- Only **bitwise operators**: `&`, `|`, `^`, `~`, `<<`, `>>` are allowed.  
- **No** loops (`for`, `while`, etc.), **no** conditionals (`if`, `switch`), **no** arithmetic operators like `*`, `/`, `%`.

Ask the user for a non-negative integer and print the result.


## How to Use

### Compile and Run
For each exercise:
```bash
gcc exercise1.c -o exercise1
./exercise1
```

For programs requiring math or binary file operations, ensure files are in the same directory and correctly opened with appropriate modes (`rb`, `wb`, `ab`, etc.).

---

## Troubleshooting
- Use exact structure definitions and follow constraints strictly.
- Do not add extra libraries beyond `<stdio.h>` for Exercise 2.
- Ensure e read/write modes are used correctly.
- Avoid undefined behavior by checking file pointers before operations.

If you run into problems, ask in the **"Ask from everybody"** channel on Moodle.

---

## Contributing  
Feel free to fork this repository, improve the code, and submit pull requests.  
If you find bugs or have suggestions, please open an issue.
