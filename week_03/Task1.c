#include <stdio.h>

int i;
void countUntil() {
    int number, sum = 0;

    printf("Please enter an integer greater than 0:\n");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Stopping: the number must be greater than zero.");
        return;
    }

    for (i = 0; i <= number; i++) {
        sum += i;
    }

    printf("The sum of integers from 0 to %d is: %d", number, sum);
}

int main() {
    countUntil();
    return 0;
}
