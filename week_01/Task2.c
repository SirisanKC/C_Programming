#include<stdio.h>

int main(){


    printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");

    int startDay = 5;
    int totalDay = 31;

    for (int i =1; i<startDay; i++){
        printf("\t");
    }

    for (int day=1; day<=totalDay; day++){
        printf("%d", day);

        if ((day+startDay -1)%7 ==0){
            printf("\n");
        }

        else{
            printf("\t");
        }
    }

    return 0;
}