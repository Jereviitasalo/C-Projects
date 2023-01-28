#include <stdio.h>
#include <string.h>

int main(void){

    char nimi1[40], nimi2[40];
    int merkki1, merkki2;

    printf("Syota kaksi merkkijonoa:\n");

    fgets(nimi1, 40, stdin);

    if (nimi1[strlen(nimi1) - 1] == '\n')
        nimi1[strlen(nimi1) - 1] = '\0';
    else
        while(fgetc(stdin) != '\n');

    fgets(nimi2, 40, stdin);

    if (nimi2[strlen(nimi2) - 1] == '\n')
        nimi2[strlen(nimi2) - 1] = '\0';
    else
        while(fgetc(stdin) != '\n');

    FILE *tiedosto1;
    FILE *tiedosto2;

    //strcat(nimi1, ".txt");
    //strcat(nimi2, ".txt");

    tiedosto1 = fopen(nimi1, "r");
    tiedosto2 = fopen(nimi2, "r");

    if (tiedosto1 != NULL || tiedosto2 != NULL){

        for(merkki1 = fgetc(tiedosto1); merkki1 != EOF; merkki1 = fgetc(tiedosto1)){
            merkki2 = fgetc(tiedosto2);

            if (merkki1 != merkki2){
                printf("Tiedostot eivat ole sisalloltaan identtiset.\n");
                return(0);
            }

        }
        printf("Tiedostot ovat sisalloltaan identtiset.\n");
    }
    else{
        printf("Tiedoston avaamisessa tapahtui virhe!\n");
        perror("Virhe: ");
        perror("Virhe: ");
    }

    fclose(tiedosto1);
    fclose(tiedosto2);

    return(0);
}
