#include <stdio.h>

int main(void){

    double tunnit;
    double veroprosentti, tuntipalkka, brutto = 0, netto = 0, vero = 0;

    printf("Anna tuntipalkka: ");
    scanf("%lf", &tuntipalkka);
    printf("Anna tehdyt tunnit: ");
    scanf("%lf", &tunnit);
    printf("Anna viela veroprosenttisi: ");
    scanf("%lf", &veroprosentti);

    brutto = tuntipalkka * tunnit;

    vero = brutto * (veroprosentti / 100);

    netto = brutto - vero;

    printf("Nettopalkkasi on %.2f euroa josta veron osuus on %.2f euroa", netto, vero);

    return(0);
}
