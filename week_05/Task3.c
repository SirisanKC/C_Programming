#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

int main() {
    char filename[100];
    printf("Enter the file name to be read:\n");
    scanf("%s", filename);

    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    char line[MAX_LINE_LENGTH];
    fgets(line, MAX_LINE_LENGTH, file); // Skip header

    printf("\nReading CSV file...\n");
    while (fgets(line, MAX_LINE_LENGTH, file)) {
        char birthyear[10], first_name[50], last_name[50], gender[20];
        sscanf(line, "%[^,],%[^,],%[^,],%s", birthyear, first_name, last_name, gender);

        int age = 2100 - atoi(birthyear);
        printf("Name: %s %s, Gender: %s, Birth Year: %s, Age in 2100: %d\n", first_name, last_name, gender, birthyear, age);
    }

    fclose(file);
    return 0;
}