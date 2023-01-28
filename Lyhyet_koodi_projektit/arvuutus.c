#include <stdio.h>

int arvuuttaja(int luku);

int main(void){

    int luku0;
    char jatkuminen = 'k';

    srand(time(NULL));

    while(jatkuminen == 'k'){
        luku0 = rand() % (100 - 1 + 1) + 1;
        jatkuminen = arvuuttaja(luku0);
        if (jatkuminen == 'e')
            break;
    }

    return(0);
}

int arvuuttaja(int luku){

    char jatko;
    int vastaus, ehto = 1;

    printf("Arvaa luku: ");

    while(ehto == 1){
        scanf("%d", &vastaus);
        if (vastaus == luku){
            printf("OIKEIN!\n");
            ehto = 0;
        }
        else{
            if (vastaus < luku)
                printf("Liian pieni luku, yrita uudelleen.\n");
            if (vastaus > luku)
                printf("Liian suuri luku, yrita uudelleen.\n");
        }
    }

    printf("Haluatko yrittaa uudelleen (vastaa k, jos haluat jatkaa ja e jos et halua jatkaa pelia)");
    do{
        scanf("%s", &jatko);
        if (jatko == 'e')
            break;
    } while(jatko != 'k');

    return(jatko);
}
