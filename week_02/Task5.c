#include <stdio.h>
#include <string.h>

int main() {
    char sentence[201];
    char *token;
    
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    printf("Splitting the sentence by vowels:\n");
    
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    const char *delimiters = "aeiouAEIOU";

    token = strtok(sentence, delimiters);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimiters);
    }

    return 0;
}