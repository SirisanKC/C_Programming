#include <stdio.h>

int findMax(int *arr, int size) {
    int max = *arr;
    int *ptr = arr;

    for (int i = 1; i < size; i++) {
        ptr++;
        if (*ptr > max) {
            max = *ptr;
        }
    }

    return max;
}

int main() {
    int size;

    printf("Enter the number of elements:\n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the numbers:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, size);
    printf("The maximum value is: %d\n", max);

    return 0;
}