# README.md

This repository contains solutions to the exercises from Chapter 7 of the CT60A2700 course. The tasks focus on dynamic memory allocation with structs, linked list manipulation, and stack implementation in C.

## Exercises

### Exercise 1: Pets Dynamic Management
**Description:**  
Write a program that manages a list of pets using an array of pointers to dynamically allocated `Pet` structures.  
The program should ask the user for the number of pets, then for each pet's name, species, and age.  
After collecting all the information, print the details of all pets.  
Use a `Pet *create_pet()` function to create each pet.  
Free all allocated memory before the program exits.

**Example Run:**  
```
How many pets do you want to add? 2
Enter name for pet 1: Max
Enter species for pet 1: Dog
Enter age for pet 1: 5
Enter name for pet 2: Luna
Enter species for pet 2: Cat
Enter age for pet 2: 3

List of pets:
Name: Max, Species: Dog, Age: 5
Name: Luna, Species: Cat, Age: 3
```

---

### Exercise 2: Linked List Management
**Description:**  
Write a program to manage a linked list that supports insertion and reversing the list.  
Implement the following functions (do not change their declarations):
- `List *create()`
- `void insert(List *L, int key)`
- `void print_list(Node *ptr)` (use lecture version)
- `void reverse(List *L)`

The program must:
1. Create a linked list.
2. Allow users to insert integers.
3. Print the list.
4. Reverse the list and print it again.

**Example Run:**  
```
Enter a number to add to the list: 5
Continue? (y/n): y
Enter a number to add to the list: 10
Continue? (y/n): n

Original list:
5 -> 10 -> NULL

Reversed list:
10 -> 5 -> NULL
```

---

### Exercise 3: Stacks
**Description:**  
Implement a stack using a linked list. Use the following structures:
```c
typedef struct node {
  int data;
  struct node *next;
} Node;

typedef struct {
  Node *top;
} Stack;
```
Implement these functions without changing their declarations:
- `Stack *createStack()`
- `int StackEmpty(Stack *s)`
- `void pushStack(Stack *s, int key)`
- `int popStack(Stack *s)`
- `void print_list(Node *ptr)` (use lecture version)

Create a menu-driven program to demonstrate stack operations.

**Menu:**  
```
Menu:
1. Create an empty stack
2. Push element to a stack
3. Pop element from a stack
4. Print stack contents
0. Exit
Enter your choice:
```

**Example Run:**  
```
Menu:
1. Create an empty stack
2. Push element to a stack
3. Pop element from a stack
4. Print stack contents
0. Exit
Enter your choice: 1
Empty stack created.

Enter your choice: 2
Enter element to push: 42

Enter your choice: 4
Stack contents:
42 -> NULL

Enter your choice: 3
Popped element: 42

Enter your choice: 0
Goodbye!
```

---

## How to Use
- Clone the repository.
- Compile each exercise using a C compiler (e.g., `gcc`).
- Run the compiled executables to test their functionality.

Example:  
```bash
gcc exercise1.c -o exercise1
./exercise1
```

## Troubleshooting
- Ensure a C compiler (like `gcc`) is installed on your system.
- Follow the specified function signatures exactly to avoid CodeGrade issues.
- Use proper memory management (`malloc()`, `free()`) to prevent memory leaks.

## Contributing
Feel free to fork this repository, make changes, and submit pull requests.  
If you encounter bugs or have suggestions for improvement, please open an issue.
