#include<stdio.h>

float calculate_bill(float kwh){
    float total_bill =0;

    if (kwh <= 500){
        total_bill = kwh*0.18;

    }else{
        total_bill += 500*0.18;
        kwh -= 500;

        if (kwh<=500){
            total_bill += kwh*0.21;
        }else{
            total_bill += 500*0.21;
            kwh -=500;
            total_bill += kwh* 0.25;
        }
    }
    return total_bill;
}
int main(){
    float kwh;

    printf("How much electricity did you use this month?\n");
    scanf("%f", &kwh);

    float bill = calculate_bill(kwh);
    
    printf("Total electricity bill this month is %.2f EUR.", bill);


    return 0;
}