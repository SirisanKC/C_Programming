#include <stdio.h>

typedef float (*FuncPtr)(float, float);

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0.0;
    }
    return a / b;
}

int main() {
    FuncPtr operations[] = {add, subtract, multiply, divide}; 
    
    float a, b, result;
    int choice;
    FuncPtr operation = NULL;

    printf("Enter the first number:\n");
    scanf("%f", &a);
    printf("Enter the second number:\n");
    scanf("%f", &b);

    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);

    if (choice == 1) {
        operation = add;
    } else if (choice == 2) {
        operation = subtract;
    } else if (choice == 3) {
        operation = multiply;
    } else if (choice == 4) {
        operation = divide;
    }

    result = operation(a,b);

    if (result != 0.0){
        printf("Result: %.2f\n", operation(a,b));
    }
    return 0;
}