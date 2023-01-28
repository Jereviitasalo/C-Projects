#include <stdio.h>
#include <string.h>

#define MAX 100

void poistaValilyonnit(char merkkijono1[], char merkkijono2[]);

int main (void){

    int i;
    char merkkijono1[3][MAX], merkkijono2[3][MAX];

    printf("Anna 3 merkkijonoa.\n\n");
    for (i=0; i<3; i++){
        printf("Anna %d. merkkijono: ", i+1);
        fgets(merkkijono1[i], 100, stdin);
    }

    for (i=0; i<3; i++){
        poistaValilyonnit(merkkijono1[i], merkkijono2[i]);
    }

    return(0);
}

void poistaValilyonnit(char merkkijono1[], char merkkijono2[]){


    // Luodaan osoitin muuttuja

    char* osoittaja;

    // Erotetaan ensimmäinen sana lauseesta ...

    osoittaja = strtok(merkkijono1, " ");

    strcat(merkkijono2, osoittaja);

    while (osoittaja != NULL){
        strcat(merkkijono2, osoittaja);
        osoittaja = strtok(NULL, " ");
    }

    printf("%s\n", merkkijono2);
}
