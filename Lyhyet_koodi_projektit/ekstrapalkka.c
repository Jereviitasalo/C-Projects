#include <stdio.h>
#include <stdlib.h>

int main(void){

    double tuntipalkka, veroprosentti, palkka = 0, vero = 0, netto = 0, lisapalkka = 0, lisatunnit = 0;
    double tunnit;

    printf("Syota tuntipalkka: ");
    scanf("%lf", &tuntipalkka);
    printf("Syota tekemasi tunnit: ");
    scanf("%lf", &tunnit);
    printf("Syota veroprosentti: ");
    scanf("%lf", &veroprosentti);

    if (tunnit > 40){
        lisatunnit = tunnit - 40;
        lisapalkka += lisatunnit * (tuntipalkka * 1.5);
    }

    palkka += (tunnit - lisatunnit) * tuntipalkka;

    vero = (veroprosentti / 100.0) * (palkka + lisapalkka);
    netto = (palkka + lisapalkka) - vero;

    printf("Nettopalkkasi on %.2lf euroa ja verottajan osuus on %.2lf euroa", netto, vero);

    return(0);
}
