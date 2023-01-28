#include <stdio.h>
#include <string.h>

char poistaValilyonnit(char jono1, char jono2);

int main (void){

    int i;
    char merkkijono1[100], merkkijono2[100];

    printf("Syota kolme merkkijonoa.\n\n");
    for(i=1; i<=3; i++){
        printf("Syota %d. merkkijono: ", i);
        scanf("%s", merkkijono1);
        poistaValilyonnit(merkkijono1, merkkijono2);
        printf("%s", merkkijono2);
    }


    return(0);
}

char poistaValilyonnit(char jono1, char jono2){

    char *uusi_jono;

    uusi_jono = strtok(jono1, " ");
    jono2 = uusi_jono;

    return(jono2);
}
