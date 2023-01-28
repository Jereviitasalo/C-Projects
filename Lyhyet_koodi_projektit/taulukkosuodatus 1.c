#include <stdio.h>

int main(void){

    int luku = 1, syote, i = 0, j;
    int lista[20] = {0};

    while (luku <= 20){
        printf("%d. ", luku);
        scanf("%d", &syote);
        while (syote > 100 || syote < 10){
            printf("Ei kelpaa!");
            printf("Yrita uudelleen > ");
            scanf("%d", &syote);
        }
        lista[i] = syote;
        i++;
        luku++;
    }
    printf("\n");
    for (j = 0; j < (sizeof(lista) / sizeof(lista[0]))-1; j++){
        for (int k = j + 1; k < sizeof(lista) / sizeof(lista[0]); k++){
            if (lista[j] != lista[k])
                printf("%d\n", lista[k]);
        }
    }
    return(0);
}