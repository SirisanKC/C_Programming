#include <stdio.h>

#define MAX_SIZE 100


void countNum(int a[], int size) {
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);
}

int main() {
    int a[MAX_SIZE], size = 0, input;

    printf("Enter the array elements separated by spaces (non-integer value terminates):\n");

    
    while (size < MAX_SIZE && scanf("%d", &input) == 1) {
        a[size++] = input;
    }

  
    countNum(a, size);

    return 0;
}