This repository contains solutions to the exercises from Chapter 2 of the CT60A2700 course. The tasks focus on basic input/output operations, string manipulation, and data type handling in C.

## Exercises

### Exercise 1: Basic Input and Output  
**Description**:  
Write a program that calculates the area of a circle. The user inputs the radius, and the program prints the value of π, the radius, and the area, all formatted to 5 decimal places.  
**Note**: Use `float` as the data type.  
**Example Run**:  
Enter the radius of the circle:
2
The current value of pi is: 3.14159
The radius of the circle is: 2.00000
The area of the circle is: 12.56636


### Exercise 2: Calendar Printing  
**Description**:  
Write a program that prints the calendar for May 2025, using horizontal tabs for alignment.  
**Example Run**:  
Sun Mon Tue Wed Thu Fri Sat
                 1   2   3
 4   5   6   7   8   9   10
11  12  13  14  15  16   17
18  19  20  21  22  23   24
25  26  27  28  29  30   31


### Exercise 3: Only the Computer Knows  
**Description**:  
Write a program that prints the size (in bytes) of the `double` data type using `sprintf()` and `sizeof()`.  
**Example Run**:  
The size of double is 8 bytes.


### Exercise 4: Space Before %c Should Be Removed from the World  
**Description**:  
Write a program that reads a string (up to 30 characters) and two characters from the user using `scanf()`, then prints them in a specific format.  
**Example Run**:  
Enter a string without spaces (up to 30 characters): spdjasdadqw
Enter two characters separated by a single space: a b
String: spdjasdadqw
First character: a
Second character: b


### Exercise 5: Eliminate Tricky Newline Character  
**Description**:  
Write a program that reads a string (up to 40 characters) using `fgets()`, replaces the newline character `\n` with `\0`, and prints the modified string followed by a "NEWLINE_CHAR" tag.  
**Example Run**:  
Enter a string:
I don't like newline characters.
String without newline character: I don't like newline characters.NEWLINE_CHAR


## How to Use  
1. Clone the repository.  
2. Compile each program using a C compiler (e.g., `gcc`).  
3. Run the compiled executables to test the functionality.  
