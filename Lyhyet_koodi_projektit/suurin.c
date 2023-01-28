#include <stdio.h>

int main(void){

    int kokonaisluvut[10], i, suurin = 0;

    printf("Syota kymmenen kokonaislukua: ");

    for (i = 0; i < 10; i++){
        scanf("%d", &kokonaisluvut[i]);
    }

    suurin = kokonaisluvut[0];

    for (i = 1; i < 10; i++){
        if (kokonaisluvut[i] > suurin)
            suurin = kokonaisluvut[i];
    }

    printf("Suurin syottamasi luku oli %d", suurin);

    return(0);
}
