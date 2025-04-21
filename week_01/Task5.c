#include<stdio.h>

int main(){

    char str[41];
    printf("Enter a string:\n");

    fgets(str, sizeof(str), stdin);

    int i =0;
    while (str[i] != '\0'){
        if (str[i]=='\n'){
            str[i]='\0';
            break;
        }
        i++;
    }
    printf("String without newline character: %s", str);
    

    return 0;
}