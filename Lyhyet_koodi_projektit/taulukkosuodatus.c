#include <stdio.h>

int main(void){

    int i, luku, taulukko[20], j, k = 0;

    for (i = 0; i < 20; i++){
        printf("Syota %d. luku: > ", i+1);
        scanf("%d", &luku);
        while ((luku < 10) || (luku > 100)){
            printf("Ei kelpaa!\n");
            printf("Yrita uudelleen > ");
            scanf("%d", &luku);
        }
        taulukko[i] = luku;
    }

    for (i = 0; i < 20; i++){
        for (j = 0; j < 20; j++){
            if (i != j){
                if (taulukko[i] == taulukko[j])
                    k = 1;
            }
        }
        if (k == 0){
            printf("%d\n", taulukko[i]);
        }
        k = 0;
    }

    return(0);
}
