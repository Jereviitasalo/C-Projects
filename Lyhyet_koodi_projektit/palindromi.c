#include <stdio.h>

int main(void){

    int luku, luku_takaperin = 0, jaannos = 0, i = 1, max = 10000;

    printf("Syota viisinumeroinen kokonaisluku: ");
    scanf("%d", &luku);

    if ((luku < 100000) && (luku > 9999)){
        while (i <= 10000){
        jaannos = luku % (10 * i);
        luku_takaperin += (jaannos / i) * max;
        max = max / 10;
        i = i * 10;
        }

        if (luku == luku_takaperin){
            printf("Luku %d on palindromi\n", luku);
        }
        else
            printf("Luku %d ei ole palindromi\n", luku);

    }
    else
        printf("Syote ei ole viisinumeroinen positiivinen kokonaisluku");


    return(0);
}
