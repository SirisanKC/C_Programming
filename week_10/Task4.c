#include <stdio.h>
#include <time.h>

int main() {
    time_t start, end;
    double cpu_time_used;
    
    start = time(NULL);
    printf("Running task...\n");
    
    for (unsigned long i = 0; i < 10000000000; i++) {
        
    }
    
    end = time(NULL);
    cpu_time_used = difftime(end, start);
    
    printf("Task completed.\n");
    printf("Execution time: %.2lf seconds\n", cpu_time_used);
    
    return 0;
}