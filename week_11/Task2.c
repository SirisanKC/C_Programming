#include <stdio.h>

struct Student {
    int ID;
    char name[50];
    float GPA;
};

int main() {
    FILE *file = fopen("students.bin", "rb");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }


    fseek(file, 2 * sizeof(struct Student), SEEK_SET);
    
    struct Student s;
    fread(&s, sizeof(struct Student), 1, file);
    
    printf("ID: %d, Name: %s, GPA: %.2f\n", s.ID, s.name, s.GPA);
    
    fclose(file);
    return 0;
}