#include <stdio.h>

int main(void){

    int arvosanat[10] = {0};
    int juoman_nro = 1, summa = 0, keskiarvo, i, j;
    int arvosanojen_lkm = sizeof(arvosanat) / sizeof(arvosanat[0]);
    int keskiarvot[4] = {0};

    for (j = 0; j <= 3; j++){
        printf("Anna juoma numero %d. pisteet\n", juoman_nro);
        // Tallennetaan arvosanat taulukkoon.
        for (i = 0; i <= 9; i++){
            printf("Anna arvosana (1-5) > ");
            scanf("%d", &arvosanat[i]);
            while(arvosanat[i] > 5 || arvosanat[i] < 1){
                printf("ARVOSANAN TULEE OLLA VALILTA 1 - 5 !\n");
                printf("Anna arvosana (1-5) > ");
                scanf("%d", &arvosanat[i]);
            }
        }
        // Lasketaan arvosanojen keskiarvo ja tarkistetaan onko juoma kelvollista.
        summa = 0;
        for(i = 0; i <= 9; i++){
            summa += arvosanat[i];
        }
        keskiarvo = 0;
        keskiarvo = (summa / arvosanojen_lkm);
        keskiarvot[j] = keskiarvo;
        juoman_nro++;
    }

    juoman_nro = 1;

    //tarkista onko keskiarvon lauseke oikein, jostain syystä alempi for looppi tulostaa väärin keskiarvon.

    for (j = 0; j <= 3; j++){
        if (keskiarvot[j] < 3)
            printf("Juoma numero %d on kelvotonta\n", juoman_nro);
        else
            printf("Juoma numero %d on kelvollista\n", juoman_nro);
        juoman_nro++;
    }
    return(0);
}
