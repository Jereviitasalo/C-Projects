#include <stdio.h>
#include <math.h>

int main(void){

    srand(time(NULL));
    laskut();


    return(0);
}

int laskut(){

    int luku, vastaus, tulos = 0, luku1, luku2;

    while (vastaus != -1){

        luku = rand() % 2;

        if (luku == 1){
            luku1 = rand() % (9 - 1 + 1) + 1;
            luku2 = rand() % (9 - 1 + 1) + 1;
            printf("Anna luku -1 lopettaaksesi\n");
            printf("Paljonko on %d kertaa %d? ", luku1, luku2);
            scanf("%d", &vastaus);
            tulos = luku1 * luku2;
            if (vastaus == -1)
                break;
            if (tulos == vastaus)
                printf("Oikein!\n");
            while (tulos != vastaus){
                printf("Vaarin, yrita uudelleen > ");
                scanf("%d", &vastaus);
                if (vastaus == -1)
                    break;
                if (vastaus == tulos)
                    printf("Oikein!\n");
            }
        }

        if (luku == 0){
            luku1 = rand() % (9 - 1 + 1) + 1;
            luku2 = rand() % (9 - 1 + 1) + 1;
            printf("Anna luku -1 lopettaaksesi\n");
            printf("Paljonko on %d jaettuna %d? ", luku1, luku2);
            scanf("%d", &vastaus);
            tulos = floor(luku1 / luku2);
            if (vastaus == -1)
                break;
            if (tulos == vastaus)
                printf("Oikein!\n");
            while (tulos != vastaus){
                printf("Vaarin, yrita uudelleen > ");
                scanf("%d", &vastaus);
                if (vastaus == -1)
                    break;
                if (vastaus == tulos)
                    printf("Oikein!\n");
            }
        }
    }
    return(0);
}
