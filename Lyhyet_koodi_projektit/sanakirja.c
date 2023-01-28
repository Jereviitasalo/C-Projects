#include <stdio.h>
#include <string.h>

int main(void){

    char sana[40], verrattava[40], *suomi_sana, *englanti_sana;
    int ehto = 0;

    fgets(sana, 40, stdin);
    if (sana[strlen(sana)-1] == '\n')
        sana[strlen(sana)-1] = '\0';
    else
        while (fgetc(stdin) != '\n');

    FILE *tiedosto;

    tiedosto = fopen("sanakirja.txt", "r");

    if (tiedosto != NULL){

        while(fgets(verrattava, 40, tiedosto)){

            if (verrattava[strlen(verrattava) - 1] == '\n')
                verrattava[strlen(verrattava) - 1] = '\0';
            else
                while (fgetc(stdin) != '\n');

            suomi_sana = strtok(verrattava, ";");
            englanti_sana = strtok(NULL, ";");

            if (strcmp(sana, suomi_sana) == 0){
                printf("Sana %s englanniksi on %s\n", suomi_sana, englanti_sana);
                ehto = 1;
                return(0);
            }

            if (strcmp(sana, englanti_sana) == 0){
                printf("Sana %s suomeksi on %s\n", englanti_sana, suomi_sana);
                ehto = 1;
                return(0);
            }
        }

        if (ehto == 0)
            printf("Sanaa %s ei loytynyt sanakirjasta\n", sana);
    }
    else{
        printf("Tiedoston avaaminen epäonnistui.\n");
        perror("Virhe: ");
    }

    fclose(tiedosto);

    return(0);
}
