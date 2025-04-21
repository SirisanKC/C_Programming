#include<stdio.h>

int main(){

    char str[31];
    char firstChar, secondChar;

    printf("Enter the string without spaces (up to 30 characters):\n");
    scanf("%30s", str);

    printf("Enter two characters separated by a single space:\n");
    scanf(" %c %c",&firstChar, &secondChar);

    printf("String:%s\n", str);
    printf("First character: %c\n", firstChar);
    printf("Second character: %c\n", secondChar);

    return 0;
}