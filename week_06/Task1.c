#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[11];
    char species[11];
    int age;
} Pet;

Pet* create_pet() {
    Pet* pet = (Pet*)malloc(sizeof(Pet));
    if (pet == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    return pet;
}

void print_pets(Pet** pets, int count) {
	printf("\nPets:\n");
    for (int i = 0; i < count; i++) {
        printf("No.%d Name: %s, Species: %s, Age: %d\n", i + 1, pets[i]->name, pets[i]->species, pets[i]->age);
    }
}

int main() {
    int num_pets;
    printf("How many pets would you like to add?\n");
    scanf("%d", &num_pets);

    Pet** pets = (Pet**)malloc(num_pets * sizeof(Pet*));
    if (pets == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i < num_pets; i++) {
        pets[i] = create_pet();
        printf("Enter the name for pet %d:\n", i + 1);
        scanf("%s", pets[i]->name);
        printf("Enter the species for pet %d:\n", i + 1);
        scanf("%s", pets[i]->species);
        printf("Enter the age for pet %d:\n", i + 1);
        scanf("%d", &pets[i]->age);
    }

    print_pets(pets, num_pets);

    for (int i = 0; i < num_pets; i++) {
        free(pets[i]);
    }
    free(pets);

    return 0;
}