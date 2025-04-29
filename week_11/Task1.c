#include <stdio.h>

int main() {
    char str[50];
    int num;
    int str_len = 0;

    printf("Enter a string (max 49 characters):\n");
    fgets(str, 50, stdin);
    
    while (str[str_len] != '\0' && str[str_len] != '\n') {
        str_len++;
    }

    if (str[str_len] == '\n') {
        str[str_len] = '\0';
    } else {
        
        str[str_len] = '\0';
    }

   
    FILE *file = fopen("string.bin", "wb");
    fwrite(str, sizeof(char), str_len + 1, file);
    fclose(file);

  
    printf("Enter an integer:\n");
    scanf("%d", &num);


    file = fopen("string.bin", "ab");
    fwrite(&num, sizeof(int), 1, file);
    fclose(file);

  
    file = fopen("string.bin", "rb");
    
    
    char readStr[50];
    fread(readStr, sizeof(char), str_len + 1, file);
    

    int readNum;
    fread(&readNum, sizeof(int), 1, file);
    
    fclose(file);

    
    printf("---\n");
    printf("String: %s\n", readStr);
    printf("Integer: %d\n", readNum);

    return 0;
}