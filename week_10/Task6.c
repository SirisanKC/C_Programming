#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char sentence[101];
    
    printf("Enter a sentence (max 100 characters):\n");
    fgets(sentence, 101, stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove newline
    
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        } else if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
        }
    }
    
    printf("Reversed case sentence:\n%s\n", sentence);
    
    return 0;
}