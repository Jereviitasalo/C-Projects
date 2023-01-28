#include <stdio.h>

int main(void){

    int taulukko[10], i, suurin = 0, indeksi = 0, luku;
    double keskiarvo = 0.0, summa = 0;

    // Luodaan taulukko joka sisaltaa luvut 0 - 100

    for (int i=0; i<10; i++) {
        do {
            printf("Anna %d. kokonaisluku > ", i+1);
            scanf("%d", &luku);
        } while (luku < 0 || luku > 100);
        taulukko[i] = luku;
        summa += taulukko[i];
    }

    for (i=0; i<10; i++){
        if (taulukko[i] > suurin){
            suurin = taulukko[i];
            indeksi = i;
        }
    }

    keskiarvo = summa / 10;

    printf("\nTaulukon\n");

    for (i=0; i<10; i++){
        printf("%d ", taulukko[i]);
    }

    printf("\nSuurin arvo on %d, ja se sijaitsee paikassa %d\n\n", suurin, indeksi);

    printf("Taulukon arvojen keskiarvo on %.3lf\n", keskiarvo);

    return(0);
}
