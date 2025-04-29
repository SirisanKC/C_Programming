#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_valid_integer(const char *str) {
    if (*str == '-' || *str == '+') str++;
    while (*str) {
        if (!isdigit(*str)) return 0;
        str++;
    }
    return 1;
}

int main() {
    char input[100];
    
    printf("Enter an integer (as a string):\n");
    fgets(input, 100, stdin);
    input[strcspn(input, "\n")] = '\0'; 
    
    if (!is_valid_integer(input)) {
        printf("Invalid input: not a valid integer.\n");
        return 1;
    }
    
    int num = atoi(input);
    printf("Original number: %d\n", num);
    printf("Absolute value: %d\n", abs(num));
    
    return 0;
}