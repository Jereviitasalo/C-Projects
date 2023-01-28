#include <stdio.h>
#include <string.h>


int main(void){

    int i, pituus = 0, j, k, lukumaara[26] = {0};
    char tekstit[3][30], aakkoset[27] = "abcdefghijklmnopqrstuvwxyz";

    printf("Kirjoita 3 eri tekstia, ohjelma laskee aakkosten maaran.\n");

    for (i=0; i<3; i++){

    scanf("%s", tekstit[i]);
    }

    for (i=0; i<3; i++){
        pituus = strlen(tekstit[i]);
        for (j=0; j< pituus; j++){
            if ((tekstit[i][j] >= 'a') && (tekstit[i][j] <= 'z')){
                for (k=0; k<27; k++){
                    if (tekstit[i][j] == aakkoset[k])
                        lukumaara[k]++;
                }
            }
        }
    }

    printf("Aakkonen   kpl\n");

    for (i=0; aakkoset[i] != '\0'; i++){
        printf("%c %9d\n", aakkoset[i], lukumaara[i]);

    }

    return(0);
}
