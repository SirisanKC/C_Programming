#include <stdio.h>

typedef int (*FuncPtr)(int);

int square(int a) {
    return a * a;
}

int doubleValue(int a) {
    return a * 2;
}

void calculation(int a, FuncPtr op, const char* description) {
    printf("The %s value of %d is: %d\n", description, a, op(a));
}



int main() {
    int num;

    
    printf("Enter a number:\n");
    scanf("%d", &num);

    
    calculation(num, square, "square");
    calculation(num, doubleValue, "double");

    return 0;
}
