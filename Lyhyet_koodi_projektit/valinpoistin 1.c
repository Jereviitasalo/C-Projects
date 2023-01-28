#include <stdio.h>
#include <string.h>

char poistaValilyonnit(char merkkijono1[][30], char merkkijono2[]);

int main(void){

    char merkkijono[3][30], uusimerkkijono[30], tulos[30];
    int i;

    printf("Syota kolme merkkijonoa\n");

    for (i=0; i<3; i++){
        scanf("%s", merkkijono[i]);
        tulos = poistaValilyonnit(merkkijono[i], uusimerkkijono);
        printf("%s\n", tulos[i]);
    }



    return(0);
}

char poistaValilyonnit(char merkkijono1[][30], char merkkijono2[]){

    const char k = " ";
    char *token;

    token = strtok(merkkijono1, k);

    while( token != NULL ) {

      strcat(merkkijono2, token);

      token = strtok(NULL, k);
   }

    return(merkkijono2);
}
