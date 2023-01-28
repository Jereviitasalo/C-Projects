#include <stdio.h>
#include <math.h>

int main(void){

    int bitti = 0, binaari, jakaja = 10000, i, luku = 0;

    printf("Anna viisibittinen binaariluku: ");
    scanf("%d", &binaari);
    if (binaari <= 11111){

        for (i = 0; i <= 4; i++){
            bitti = binaari % 10;
            luku += pow(2, i) * bitti;
            binaari -= bitti;
            binaari = binaari / 10;

        }
    }
    printf("%d", luku);


    return(0);
}
