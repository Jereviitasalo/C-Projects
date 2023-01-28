#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>

float keskiarvo(char *lista);

int main() {

    char lista[] = "201,53,12,31,5";
    keskiarvo(lista);

    return 0;
}

float keskiarvo(char *lista){

    float summa, arvo;
    float keskiarvo;
    int i = 0;

    // Haluamme purkaa merkkijonon osiin, jotta voimme kasitella siina ilmenevia lukuja.

    // Luodaan osoitin muuttuja

    char *osoittaja;

    // Erotetaan nyt ensimmainen luku viestista ...

    osoittaja = strtok(lista, ",");

    while (osoittaja != NULL){

        arvo = atol(osoittaja);
        summa += arvo;
        osoittaja = strtok(NULL, ",");
        i++;
    }

    keskiarvo = summa / i;
    return(keskiarvo);
}
