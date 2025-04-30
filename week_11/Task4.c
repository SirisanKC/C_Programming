#include <stdio.h>

void printBinary(unsigned int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int shift = 31;
    while ((num & (1 << shift)) == 0) {
        shift--;
    }

    for (; shift >= 0; shift--) {
        printf("%d", (num & (1 << shift)) ? 1 : 0);
    }
}

int main() {
    unsigned int num;
    printf("Enter a non-negative integer:\n");
    scanf("%u", &num);
    
    printf("Binary representation: ");
    printBinary(num);
    printf("\n");
    
    return 0;
}