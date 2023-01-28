#include <stdio.h>
#include <math.h>

double laskeHypotenuusa(double x, double y);

int main() {

    double sivu1 = 0.0;
    double sivu2 = 0.0;

    printf("\nAnna ensimmainen sivu: ");
    scanf("%lf", &sivu1);

    printf("\nAnna toinen sivu: ");
    scanf("%lf", &sivu2);

    printf("%lf", laskeHypotenuusa(sivu1, sivu2));

    return 0;
}

double laskeHypotenuusa(double x, double y){

    double hypotenuusa = 0;

    hypotenuusa = sqrt(pow(x, 2) + pow(y, 2));

    return(hypotenuusa);
}
