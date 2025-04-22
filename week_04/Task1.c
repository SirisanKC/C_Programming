#include <stdio.h>

#define MAX_SIZE 100

void reverseArray(int A[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int A[MAX_SIZE], size = 0, input;

    printf("Enter numbers separated by spaces (non-integer value terminates):\n");

    while (size < MAX_SIZE && scanf("%d", &input) == 1) {
        A[size++] = input;
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }

    reverseArray(A, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}