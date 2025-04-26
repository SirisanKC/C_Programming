#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = NULL;
    int size = 4;
    int count = 0;
    int num;

    array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter numbers (enter -1 to stop):\n");

    while (1) {
        printf("Enter a number:\n");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        array[count++] = num;

        if (count >= size * 0.75) {
            size *= 2;
            array = (int *)realloc(array, size * sizeof(int));
            if (array == NULL) {
                printf("Memory reallocation failed\n");
                return 1;
            }
            printf("The array size increases to %d.\n", size);
        }
    }

    printf("\nFinal array (with %d elements): ", count);
    for (int i = 0; i < count; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}