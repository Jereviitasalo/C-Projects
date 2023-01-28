#include <stdio.h>

int kertolasku();

int main(void){

    srand(time(NULL));
    kertolasku();

    return(0);
}

int kertolasku(){

    int luku1, luku2, pienin = 0, suurin = 9;
    int vastaus = 0, tulos;

    while(vastaus != -1){

        luku1 = rand() % (suurin - pienin + 1) + pienin;
        luku2 = rand() % (suurin - pienin + 1) + pienin;

        printf("Anna luku -1 lopettaaksesi\n");
        printf("Paljonko on %d kertaa %d? ", luku1, luku2);
        scanf("%d", &vastaus);
        tulos = luku1 * luku2;
        if (vastaus == -1)
            break;
        if (vastaus == tulos)
            printf("Oikein!\n\n");
        while (vastaus != tulos){
            printf("Vaarin, yrita uudelleen > ");
            scanf("%d", &vastaus);
            if (vastaus == -1)
                break;
            if (vastaus == tulos)
                printf("Oikein!\n\n");
        }
    }
    return(0);
}
