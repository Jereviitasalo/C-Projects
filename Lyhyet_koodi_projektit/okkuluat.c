#include <stdio.h>

void kaanna_taulukko(int taulukko[], int n);

int main(void){

    int normaali[10], i;

    // Luodaan taulukot

    for (i=0; i<10; i++){
        printf("Syota %d. luku > ", i+1);
        scanf("%d", &normaali[i]);
    }

    kaanna_taulukko(normaali, 10);


    return(0);
}

void kaanna_taulukko(int taulukko[], int n){

    int i, kaanteinen[10];

    for (i=0; i<n; i++){
        kaanteinen[i] = taulukko[n-(i+1)];
    }

    for (i=0; i<n; i++){
        printf("%d %d\n", taulukko[i], kaanteinen[i]);
    }


}
