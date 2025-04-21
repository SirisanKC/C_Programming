# README.md

This repository contains solutions to the exercises from Chapter 3 of the CT60A2700 course. The tasks focus on tiered electricity rates, digit manipulation, vowel counting, and string handling in C.

## Exercises

### Exercise 1: Tiered Electricity Rates
**Description:**
Write a program that calculates the electricity bill for a household based on tiered electricity rates provided by the utility company. The program should print the total bill amount formatted to 2 decimal places.

**Rates:**
- Tier 1: 0 - 500 kWh at 0.18 EUR/kWh
- Tier 2: 501 - 1000 kWh at 0.21 EUR/kWh
- Tier 3: 1001+ kWh at 0.25 EUR/kWh

**Example Run:**
```
Enter the electricity consumption in kWh: 800 
Total bill: 153.00 EUR
```

### Exercise 2: Tiered Electricity Rates with Switch-Case
**Description:**
Write a similar program as in Exercise 1, but use switch-case statements to determine the bill based on the consumption.

**Example Run:**
```
Enter the electricity consumption in kWh: 1200 
Total bill: 245.00 EUR
```

### Exercise 3: Bad Luck Digits
**Description:**
Write a program that calculates and prints the summation of the squares of each digit in a positive integer, following specific rules for digits 4 and 8.

**Rules:**
- Skip the digit 4.
- Stop calculation upon encountering the digit 8.

**Example Run:**
```
Enter a positive integer: 1863 
Summation of squares: 45
```

### Exercise 4: How Many Vowels?
**Description:**
Write a program that counts the number of vowels (a, e, i, o, u, A, E, I, O, U) and the total number of characters in a given sentence (up to 200 characters).

**Example Run:**
```
Enter a sentence: Hello World! 
Number of vowels: 3 
Total characters: 12
```

### Exercise 5: We Don't Need Vowels at All
**Description:**
Write a program that splits a given sentence into substrings using vowels as delimiters. Each substring should be displayed on a new line.

**Example Run:**
```
Enter a sentence: This is an example. 
Substrings: 
Ths
s
n
xmpl
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
