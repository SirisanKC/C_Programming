# README.md

This repository contains solutions to the exercises from Chapter 6 of the CT60A2700 course. The tasks focus on dynamic memory allocation, file input/output, string manipulation, and struct-based data handling in C.

## Exercises

### Exercise 1: Echo Machine
**Description:**  
Write a program that acts as an echo machine. It reads lines of text (up to 50 characters) from the user using `getline()`, and immediately prints them back. The input process ends when the user presses `Ctrl+D`.  
Make sure to free all allocated memory before the program exits.

**Example Run:**  
```
Enter text: Hello world
Echo: Hello world
Enter text: This is a test
Echo: This is a test
(Press Ctrl+D to exit)
```

---

### Exercise 2: Extensions
**Description:**  
Implement a dynamic integer array. Start with an array of size 4. Read integers one-by-one from user input. When the array is 75% full, reallocate it to double its size using `realloc()`. Continue accepting numbers until the user inputs `-1`.  
Free all allocated memory before exiting.

**Example Run:**  
```
Enter a number: 5
Enter a number: 10
Enter a number: 15
Array is 75% full. Doubling the size.
Enter a number: 20
Enter a number: -1
Numbers entered: 5 10 15 20
```

---

### Exercise 3: The CSV Data Extractor
**Description:**  
Write a program that reads from a CSV file containing columns `birthyear`, `first_name`, `last_name`, and `gender`.  
Ask the user for the filename, read the file, and calculate each person’s age in the year 2100 using:  
```
Age = 2100 - birthyear
```  
Convert the birth year from a string to an integer using `atoi()`.

**Example Run:**  
```
Enter the filename: example_data_task3.csv
Name: John Doe, Gender: Male, Age in 2100: 123
Name: Jane Smith, Gender: Female, Age in 2100: 119
```

---

### Exercise 4: Data Writer
**Description:**  
Create a program that prompts the user for personal information (name, age, gender) and writes it into a file called `chap6_task4_output.txt`, with fields separated by commas.

**Example Run:**  
```
Enter first name: Alice
Enter age: 30
Enter gender: Female
Data written to chap6_task4_output.txt
```

**Example Output File (`chap6_task4_output.txt`):**  
```
Alice,30,Female
```

---

### Exercise 5: The CSV Data Sorter
**Description:**  
Write a program that reads records from a CSV file into an array of structs:  
```c
typedef struct {
  int birthYear;
  char firstName[50];
  char lastName[50];
  char gender[20];
} Person;
```  
Sort the array using a bubble sort by birth year (ascending), and print the sorted records.

**Example Run:**  
```
Enter the filename: example_data_task3.csv

Sorted Records (by Birth Year):
Birth Year: 1877, Name: Jane Smith, Gender: Female
Birth Year: 1879, Name: John Doe, Gender: Male
```

---

## How to Use
- Clone the repository.
- Compile each exercise using a C compiler (e.g., `gcc`).
- Run the compiled programs to test their functionality.

Example:  
```bash
gcc exercise1.c -o exercise1
./exercise1
```

## Troubleshooting
- Ensure a C compiler (like `gcc`) is installed on your system.
- Provide valid inputs to avoid runtime errors.
- Make sure the CSV files are properly formatted for exercises involving file reading.

## Contributing
Feel free to fork this repository, make changes, and submit pull requests.  
If you encounter bugs or have suggestions for improvement, please open an issue.
