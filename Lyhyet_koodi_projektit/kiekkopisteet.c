#include <stdio.h>
#include <string.h>

typedef struct {
    char joukkue[50];
    int voitot;
    int haviot;
    int ero;
} joukkue_tiedot;

joukkue_tiedot tietojen_luku(int lkm);
void jarjesta_joukkueet(joukkue_tiedot erotus[], int lkm);
void tulostus(joukkue_tiedot l, int lkm);

//int lue_luku(void);
//void lue_nimi(char merkkijono[], int pituus);

int main(void) {

    int i, joukkueet_lkm;

    printf("Syota joukkueiden maara: ");
    scanf("%d", &joukkueet_lkm);
    //joukkueet_lkm = lueluku();

    joukkue_tiedot tiedot[joukkueet_lkm];

    for (i = 0; i < joukkueet_lkm; i++)
        tiedot[i] = tietojen_luku(i);

    for (i = 0; i < joukkueet_lkm; i++)
        tiedot[i].ero = tiedot[i].voitot - tiedot[i].haviot;

    lajittele(tiedot, joukkueet_lkm);

    printf("****************************************\n");
    printf("            TULOSLISTA\n");
    printf("****************************************\n\n");

    for (i = 0; i < joukkueet_lkm; i++)
        tulostus(tiedot[i], i);

    return(0);
}

joukkue_tiedot tietojen_luku(int lkm) {

    joukkue_tiedot t;

    printf("\nAnna %d. joukkueen nimi > ", lkm + 1);
    //lue_nimi(t.joukkue, 50);

    fgets(t.joukkue, 50, stdin);

    if (t.joukkue[strlen(t.joukkue) - 1] == '\n')
        t.joukkue[strlen(t.joukkue) - 1] = '\0';
    else
        while(fgetc(stdin) != '\n');

    printf("\nVoittojen maara > ");
    scanf("%d", &t.voitot);
    //t.voitot = lueluku();

    printf("\nTappioiden maara > ");
    scanf("%d", &t.haviot);
   // t.haviot = lueluku();

    return(t);
}

void jarjesta_joukkueet(joukkue_tiedot erotus[], int lkm) {

    joukkue_tiedot temp;

    int i, j, h;

    for (i = 0; i < lkm; i++) {
        h = i;

        for (j = i + 1; j < lkm; j++) {

            if (erotus[j].ero > erotus[h].ero) {
                h = j;

            }
        }

        if (h != i) {
            temp = erotus[h];
            erotus[h] = erotus[i];
            erotus[i] = temp;
        }
    }
}

void tulostus(joukkue_tiedot l, int lkm) {

    printf("%d. joukkue:    %s tilanne: ", lkm + 1, l.joukkue);

    printf("%d voittoa ja %d tappiota\n", l.voitot, l.haviot);
}

/*int lue_luku(void) {

   int luku;
   char merkki;
   int status;

   while (((status = scanf("%d%c", &luku, &merkki)) == 0)  || (2 == status && merkki != '\n')){
      while(fgetc(stdin) != '\n');
      printf("Et syottanyt kokonaislukua > ");
   }
   return(luku);
}*/

/*void lue_nimi(char merkkijono[], int pituus) {

   fgets(merkkijono, pituus, stdin);

   if (merkkijono[strlen(merkkijono) - 1] == '\n')
      merkkijono[strlen(merkkijono) - 1] = '\0';
   else
      while(fgetc(stdin) != '\n');
}*/
