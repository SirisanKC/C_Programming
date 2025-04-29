#include<stdio.h>
#include<math.h>

int main(){

    double radius, angle, result;

    printf("Enter the radius of the circle:\n");
    scanf("%lf", &radius);
    printf("Enter the angle in degrees:\n");
    scanf("%lf", &angle);
    result = (M_PI*radius*angle)/180;
    printf("The circular arc length is %.2lf",result );
    return 0;

}