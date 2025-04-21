#include<stdio.h>

int main(){

    char output[50];
    sprintf(output, "The size of double is %zu bytes.", sizeof(double));
    printf("%s\n", output);
    
    return 0;
}