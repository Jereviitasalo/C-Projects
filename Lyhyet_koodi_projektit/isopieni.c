#include <stdio.h>
#include <string.h>

int main(void){

    char taulukko[100];
    int i = 0;

    printf("Kirjoita jotain tekstia\nOhjelma tulostaa tekstin seka isoilla etta pienilla kirjaimilla.\n");
    fgets(taulukko, 101, stdin);
    if( taulukko[strlen(taulukko)-1] == '\n')
        taulukko[strlen(taulukko)-1] = '\0';
    while(taulukko[i] != '\0'){
        if ((taulukko[i] >= 'A') && (taulukko[i] <= 'Z'))
            taulukko[i] = taulukko[i] + 32;
        i++;
    }
    printf("%s\n", taulukko);

    i = 0;
    while(taulukko[i] != '\0'){
        if ((taulukko[i] >= 'a') && (taulukko[i] <= 'z'))
            taulukko[i] = taulukko[i] - 32;
        i++;
    }
    printf("%s", taulukko);


    return(0);
}
