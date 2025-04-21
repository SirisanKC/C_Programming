#include <stdio.h>
#include <string.h>

int countVowels(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    char sentence[201]; 

    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);

    size_t length = strlen(sentence);
    if (sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';
    }

    int numVowels = countVowels(sentence);
    int numCharacters = strlen(sentence);

    printf("Number of vowels: %d\n", numVowels);
    printf("Number of characters: %d\n", numCharacters);

    return 0;
}
