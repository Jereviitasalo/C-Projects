#include <stdio.h>

int korotaKokonaislukuPotenssiin (int luku, int potenssi);

int main (void){

    int luku, potenssi;

    printf("Syota ensin luku ja sen jälkeen sen potenssi\n");
    scanf("%d", &luku);
    scanf("%d", &potenssi);

    printf("Luku %d korotettuna potenssiin %d on %d\n", luku, potenssi, korotaKokonaislukuPotenssiin(luku, potenssi));

    return(0);
}

int korotaKokonaislukuPotenssiin (int luku, int potenssi){

    int tulos = 1, i;

    for (i = 1; i <= potenssi; i++){
        tulos = tulos * luku;
    }

    return(tulos);
}
