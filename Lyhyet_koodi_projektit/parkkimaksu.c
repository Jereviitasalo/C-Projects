#include <stdio.h>
#include <math.h>

double laskeParkkiMaksu();

int main(void) {

    printf("Syota pysakointiaikasi:\n");

    laskeParkkiMaksu();

    return(0);
}

double laskeParkkiMaksu() {

    double perusmaksu = 2, lisamaksu = 0.5, tulos = 0, summa = 0, tunnit;
    int laskuri = 0;

    printf("%s    %s    %s\n", "Asiakas", "Tunnit", "Veloitus");

    while (laskuri <= 2) {
        scanf("%2lf", &tunnit);
        while (tunnit > 0) {
            if (tunnit > 3)
                summa = lisamaksu + perusmaksu;
            if (tunnit <= 3)
                summa = perusmaksu;
            tulos = tulos + summa;
            tunnit--;
        }
        laskuri++;
        printf("%7d%10.2lf%10.2lf\n", laskuri, tunnit, tulos);
    }

    return(0);
}

