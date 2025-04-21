#include <stdio.h>

float calculate_electricity_bill(float kWh) {
    float total_bill = 0;
    int tier = (int)(kWh / 500); 

    switch (tier) {
        case 0:  
            total_bill = kWh * 0.18;
            break;
        case 1:  
            total_bill = 500 * 0.18 + (kWh - 500) * 0.21;
            break;
        case 2:  
            total_bill = 500 * 0.18 + 500 * 0.21 + (kWh - 1000) * 0.25;
            break;
        default:  
            total_bill = 500 * 0.18 + 500 * 0.21 + 500 * 0.25 + (kWh - 1500) * 0.25;
            break;
    }

    return total_bill;
}

int main() {
    float kWh;
    

    printf("How much electricity did you use this month?\n");
    scanf("%f", &kWh);


    float bill = calculate_electricity_bill(kWh);

  
    printf("Total electricity bill this month is %.2f EUR.", bill);

    return 0;
}
