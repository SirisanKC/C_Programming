#include<stdio.h>

int main(){

    float radius;
    float pi = 3.14159;

    printf("Enter the radius of the circle:\n");
    scanf("%f", &radius);

    float result = pi*radius*radius;

    printf("The current value of pi is: %.5f\n", pi);
    printf("The radius of the circle is: %.5f\n", radius);
    printf("The area of circle is: %.5f\n", result);

    return 0;
}