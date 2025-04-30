#include <stdio.h>

int countUpBits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    unsigned int num;
    printf("Enter an unsigned integer:\n");
    scanf("%u", &num);
    
    printf("Amount of 1 bits: %d\n", countUpBits(num));
    return 0;
}