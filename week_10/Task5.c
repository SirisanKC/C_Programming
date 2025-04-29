#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    
    printf("Enter a character:\n");
    scanf("%c", &c);
    
    printf("Classification:\n");
    
    if (isalpha(c)) {
        printf("- It is an alphabetic character.\n");
        if (islower(c)) {
            printf("  -> and a lowercase letter.\n");
        } else {
            printf("  -> and an uppercase letter.\n");
        }
    } else if (isdigit(c)) {
        printf("- It is a digit.\n");
    } else if (ispunct(c)) {
        printf("- It is a punctuation character.\n");
    } else {
        printf("- Unknown character type.\n");
    }
    
    return 0;
}