#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    int age;
    char gender[20];
    char choice;

    FILE* file = fopen("chap6_task4_output.txt", "w");
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    do {
        printf("Enter name (without spaces):\n");
        scanf("%s", name);
        printf("Enter age: \n");
        scanf("%d", &age);
        printf("Enter gender: \n");
        scanf("%s", gender);

        fprintf(file, "%s,%d,%s\n", name, age, gender);

        printf("Do you want to add another person? (y/n):\n");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(file);
    printf("Data saved successfully to chap6_task4_output.txt.\n");

    return 0;
}