#include <stdio.h>
#include <string.h>
#include <ctype.h>


void toUpperCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[100];
    int choice;

    // Input string
    printf("Enter a string:\n");
    scanf(" %[^\n]", str);

    // Menu
    printf("Choose operation:\n");
    printf("1. Uppercase\n");
    printf("2. Lowercase\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);

    
    void (*stringFunctions[])(char*) = {toUpperCase, toLowerCase};

    
    stringFunctions[choice - 1](str);
    printf("Processed String: %s\n", str);

    return 0;
}