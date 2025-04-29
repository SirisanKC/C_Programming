#include<stdio.h>
#include<math.h>
const double g = 9.8;

int main(){

    double speed, angle, height, time;
    

    printf("Enter initial speed v (m/s): \n");
    scanf("%lf", &speed);

    printf("Enter launch angle θ (radians): \n");
    scanf("%lf", &angle);

    height = (pow(speed, 2)* pow(sin(angle),2))/(2*g);
    time = (2*speed*sin(angle))/g;

    printf("Maximum Height:\n");
    printf("--Exact: %.2lf m\n", height);
    printf("--Floor: %.2lf m\n", floor(height));
    printf("--Ceil : %.2lf m\n", ceil(height));

    printf("\nTotal Flight Time:\n");
    printf("--Exact: %.2lf s\n", time);
    printf("--Floor: %.2lf s\n", floor(time));
    printf("--Ceil : %.2lf s\n", ceil(time));

    return 0;

}