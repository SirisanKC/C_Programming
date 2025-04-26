#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100
#define INITIAL_CAPACITY 10  

typedef struct {
    int birthYear;
    char firstName[50];
    char lastName[50];
    char gender[20];
} Person;

void sortRecordsByBirthYear(Person people[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (people[j].birthYear > people[j + 1].birthYear) {
                Person temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
    }
}

int main() {
    char filename[100];
    printf("Enter the file name to be read:\n");
    scanf("%s", filename);

    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    } else {
        printf("\nReading CSV file...\n");
    }


    int capacity = INITIAL_CAPACITY;
    Person* people = (Person*)malloc(capacity * sizeof(Person));  
    if (people == NULL) {
        printf("Memory allocation failed.\n");
        fclose(file);
        return 1;
    }

    int recordCount = 0;
    char line[MAX_LINE_LENGTH];

    fgets(line, MAX_LINE_LENGTH, file);

    while (fgets(line, MAX_LINE_LENGTH, file)) {
        char birthyear[10];

        if (sscanf(line, "%[^,],%[^,],%[^,],%s", birthyear, people[recordCount].firstName, people[recordCount].lastName, people[recordCount].gender) == 4) {
            people[recordCount].birthYear = atoi(birthyear);
            recordCount++;

            if (recordCount >= capacity) {
                capacity *= 2;  
                people = (Person*)realloc(people, capacity * sizeof(Person));
                if (people == NULL) {
                    printf("Memory reallocation failed.\n");
                    fclose(file);
                    return 1;
                }
            }
        }
    }

    fclose(file);

    sortRecordsByBirthYear(people, recordCount);

    printf("\nSorted Records (by Birth Year):\n");
    for (int i = 0; i < recordCount; i++) {
        printf("Birth Year: %d, Name: %s %s, Gender: %s\n", people[i].birthYear, people[i].firstName, people[i].lastName, people[i].gender);
    }

  
    free(people);

    return 0;
}