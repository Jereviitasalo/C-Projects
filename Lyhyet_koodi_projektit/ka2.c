#include <stdio.h>

int main(void){

    double luku, summa = 0, i = 0, keskiarvo = 0;

    printf("Syota kokonaislukuja, ohjelma laskee niiden keskiarvon.\nOhjelma lopettaa kun syotat negatiivisen luvun.\n");

    do {
        scanf("%lf", &luku);
        if (luku >= 0){
            summa += luku;
            i++;
        }

    } while (luku >= 0);

    keskiarvo = summa / i;

    printf("%.2lf", keskiarvo);

    return(0);
}
