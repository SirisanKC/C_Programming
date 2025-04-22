#include <stdio.h>
#include <stdlib.h>


char asciiToChar(int asciiValue) {
    return (char)asciiValue;
}


int charToAscii(char c) {
    return (int)c;
}

int main() {
    int choice;

    do {
        // Display menu
        printf("Menu:\n");
        printf("1. Convert ASCII value to character\n");
        printf("2. Convert character to ASCII value\n");
        printf("0. Exit\n");
        printf("Enter your choice:\n");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            fflush(stdin); 
            continue;
        }

        switch (choice) {
            case 1: {
                int asciiValue;
                printf("Enter an ASCII value:\n");
                if (scanf("%d", &asciiValue) != 1) {
                    printf("Invalid input! Please enter a valid ASCII value.\n");
                    fflush(stdin);
                    continue;
                }
                printf("The character for ASCII value %d is '%c'.\n", asciiValue, asciiToChar(asciiValue));
                printf("\n");
				break;
            }
            case 2: {
                char c;
                printf("Enter a character:\n");
                fflush(stdin); 
                scanf(" %c", &c);
                printf("The ASCII value for character '%c' is %d.\n", c, charToAscii(c));
                printf("\n");
				break;
            }
            case 0:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}
