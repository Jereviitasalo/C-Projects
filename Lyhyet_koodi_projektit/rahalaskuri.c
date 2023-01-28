#include <stdio.h>

int main(void){

    int luku = 1, i, j = 0;
    int lukumaara[9] = {0};
    int rahayksikot[9] = {1, 2, 5, 10, 20, 50, 100, 200, 500};
    int palkka[5] = {0};
    int yhteensa[9] = {0};

    // Sijoitetaan palkat taulukkoon while loopilla, sekä lasketaan
    //kuinka monta kutakin rahayksikköä tiettyä palkkaa kohden on for loopilla.

    while(luku <= 5){
        printf("Anna %d. tyontekijan palkka > ", luku);
        scanf("%d", &palkka[j]);
        j++;
        luku++;
    }

    printf("\nPalkka  500 200 100  50  20  10   5   2   1 \n");

    j = 0;

    while(j <= 4){
        printf("%6d ", palkka[j]);
        for (int i = 8; i >= 0; --i){
            lukumaara[i] = 0;
        }
            for(i = 8; i >= 0; i--){
                if (palkka[j] >= rahayksikot[i]){
                    while (palkka[j] >= rahayksikot[i]){
                        palkka[j] -= rahayksikot[i];
                        lukumaara[i]++;
                        yhteensa[i]++;
                    }
                }
            }
        i = 8;
        printf("%4d", lukumaara[i]);

        for(i = 7; i >= 0; i--){
            printf("%4d", lukumaara[i]);
        }
        printf("\n");
        j++;
    }
    printf("       ");
    for(i = 8; i >= 0; i--){
        printf("%4d", yhteensa[i]);
    }

    return(0);
}
