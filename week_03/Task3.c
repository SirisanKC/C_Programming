#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float celsius;
    
    printf("Enter temperature in Celsius:\n");
    scanf("%f", &celsius);
    
    printf("%.2f Celsius is equal to %.2f Fahrenheit", celsius, celsiusToFahrenheit(celsius));
    
    return 0;
}
