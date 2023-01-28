#include <stdio.h>

int main(void){

    double fahrenheit = 0;
    int celsius = -100, i = 0;

    printf("%7s%12s\n", "Celsius", "Fahrenheit");

    while (i <= 20){
        fahrenheit = (celsius * 1.8) + 32;
        printf("%5d%12.2f\n", celsius, fahrenheit);
        celsius += 10;
        i++;
    }


    return(0);

}
