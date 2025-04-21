#include <stdio.h>

int main() {
    int number, sum = 0, digit;
    
   
    printf("Give the integer:\n");
    scanf("%d", &number);
    
    
    while (number > 0) {
        digit = number % 10;  
        
        
        if (digit == 4) {
            number /= 10;
            continue;
        }
        
        
        if (digit == 8) {
            break;
        }
        
        
        sum += digit * digit;
        
       
        number /= 10;
    }
    

    printf("The summation is %d.", sum);
    
    return 0;
}