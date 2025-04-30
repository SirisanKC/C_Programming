#include <stdio.h>

int isPowerOfTwo(unsigned int num) {
    return num && !(num & (num - 1));
}

int main() {
    unsigned int num;
    printf("Enter an unsigned integer:\n");
    scanf("%u", &num);
    
    if (isPowerOfTwo(num)) {
        printf("%u is a power of 2.\n", num);
    } else {
        printf("%u is not a power of 2.\n", num);
    }
    
    return 0;
}
