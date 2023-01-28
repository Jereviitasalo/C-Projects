#include <stdio.h>

int main(void){

    int i = 0, luku, j = 9;

    int taulukko1[10] = {0};
    int taulukko2[10] = {0};

    while (i <= 9){
        printf("Syota %d. luku >", (i + 1));
        scanf("%d", &luku);
        taulukko1[i] = luku;
        taulukko2[j] = luku;
        j--;
        i++;
    }

    for (i = 0; i <= 9; i++){
        printf("%d  %d\n", taulukko1[i], taulukko2[i]);
    }
    return(0);
}