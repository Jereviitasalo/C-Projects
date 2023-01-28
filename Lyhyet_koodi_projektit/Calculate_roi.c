#include <stdio.h>

void calculate(int days, double roi, double investment);

int main (void){
    double daily_roi = 0;
    int days = 0;
    double investment = 0;

    printf("Investment: ");
    scanf("%lf", &investment);
    printf("Days: ");
    scanf("%d", &days);
    printf("Daily roi: ");
    scanf("%lf", &daily_roi);

    calculate(days, daily_roi, investment);

    return 0;
}

void calculate(int days, double roi, double investment){
    double result = investment;
    int i = 0;
    for (i = 0; i < days; i++){
        result = result + result * (roi / 100);
        printf("Day %d. = %.2lf dollars\n", i+1, result);
    }
}