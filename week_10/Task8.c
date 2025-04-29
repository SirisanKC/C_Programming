#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(42); 
    
    printf("Your lucky numbers are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", rand() % 100 + 1);
    }
    printf("\n");
    
    return 0;
}