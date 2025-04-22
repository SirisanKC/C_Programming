#include <stdio.h>
#include <string.h>

void swapElements(char str[], int index1, int index2) {
    int len = strlen(str);
    
    if (index1 < 0 || index2 < 0 || index1 >= len || index2 >= len) {
        printf("Indices are out of bounds.");
        return;
    }
    
    char temp = str[index1];
    str[index1] = str[index2];
    str[index2] = temp;
    
    printf("Modified string: %s", str);
}

int main() {
    char str[100];
    int idx1, idx2;
    
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    
    printf("Enter first index:\n");
    scanf("%d", &idx1);
    printf("Enter second index:\n");
    scanf("%d", &idx2);
    
    swapElements(str, idx1, idx2);
    
    return 0;
}