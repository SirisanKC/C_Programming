#include <stdio.h>
#include <stdlib.h>

char **generateStrings(int n) {
    char **strArray = (char **)malloc(n * sizeof(char *));  

    if (strArray == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);  
    }

    for (int i = 0; i < n; i++) {
        strArray[i] = (char *)malloc(100 * sizeof(char));  

        if (strArray[i] == NULL) {
            printf("Memory allocation failed for string %d.\n", i);
            exit(1);
        }

        printf("Enter string %d:\n", i + 1);
        scanf(" %[^\n]%*c", strArray[i]);  
    }

    return strArray;
}

int main() {
    int n;

    printf("Enter the number of strings:\n");
    scanf("%d", &n);

    char **strings = generateStrings(n);

    printf("\nThe stored strings are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d: %s\n", i + 1, strings[i]);
    }

    for (int i = 0; i < n; i++) {
        free(strings[i]);
    }

    free(strings);

    return 0;
}