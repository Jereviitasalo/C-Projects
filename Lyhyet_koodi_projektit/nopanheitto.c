#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int noppa1 = 0, noppa2 = 0, tulos = 0, i, yhteensa = 0;
    int summat[11] = {0};
    int heitot = 1;

    srand(time(NULL));

    while (heitot <= 36000){

        noppa1 = (rand() % (7 - 1)) + 1;
        noppa2 = (rand() % (7 - 1)) + 1;
        tulos = noppa1 + noppa2;

        summat[tulos - 2]++;

        heitot++;
    }

    printf("Summa   Lukumaara\n");
    for(i = 0; i <= 10; i++){
        printf("%8d   %6d\n", (i + 2), summat[i]);
    }

    for (i = 0; i<= 10; i++){
        yhteensa += summat[i];
    }
    printf("YHTEENSA   %6d", yhteensa);

    return(0);
}
