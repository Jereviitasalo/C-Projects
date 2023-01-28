#include <stdio.h>

int main(void){

    int tunnit, tuntipalkka, bruttopalkka;

    printf("Anna tuntipalkka > ");
    scanf("%d", &tuntipalkka);
    printf("Tehdyt tunnit > ");
    scanf("%d", &tunnit);

    bruttopalkka = tuntipalkka * tunnit;

    printf("Bruttopalkkasi on %d euroa", bruttopalkka);


    return(0);
}
