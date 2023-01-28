#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int tarkista_luku(int luku, int indeksi, int taulukko[]);

int main(void) {

    srand (time(NULL));

    int randomi = 0, taulukko[20], ehto;

    for (int i = 0; i < 20; i++) {
        ehto = 0;
        while (ehto == 0) {
            randomi = rand() % 20 + 1;
            ehto = tarkista_luku(randomi, i, taulukko);
        }
        taulukko[i] = randomi;
    }
    for (int i = 0; i < 20; i++)
        printf("%d\n", taulukko[i]);
    return(0);
}

int tarkista_luku(int luku, int indeksi, int taulukko[]) {

    int ehto = 1;
    for (int i = 0; i < indeksi; i++) {
        if (luku == taulukko[i])
            ehto = 0;
    }
    return(ehto);
}
