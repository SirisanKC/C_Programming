#include <stdio.h>
#include <string.h>
int i;
void reverseString(char str[]) {
    int len = strlen(str);
    
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    
    printf("Reversed string: %s\n", str);
}

int main() {
    char str[100];
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    reverseString(str);
    return 0;
}
