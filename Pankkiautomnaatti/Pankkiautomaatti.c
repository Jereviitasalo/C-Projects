#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// FUNKTION PROTOTYYPIT

void takaisin_paavalikkoon(); // Talla funktiolla paastaan takaisin paavalikkoon tai voidaan lopettaa ohjelma halutessa.
void tulosta_paavalikko(); // Tulostaa paavalikon.
double otto_funktio(int summat[], int n, double nostettavissa);
void tarkista_saldo(double saldo, double nostoraja, double nostettavissa);
double lataa_liittyma(char liittyman_valinta[3][15], int n, int lataukset[], double nostettavissa);
void tapahtumat_funktio();
void tarkista_tunnusluku(void);
void clearBuffer(void);


int main(void){

    int n, ehto = 0, summat[6] = {20, 40, 60, 90, 140, 240}, lataukset[7] = {10, 15, 20, 25, 30, 50, 100};
    char valinta[15], liittyman_valinta[3][15] = {"Saunalahti", "Dna", "Go Mobile"};
    double saldo = 900.00, nostoraja = 400.00, nostettavissa = 853.00, muutos = 0;

    printf("Tervetuloa!\n");
    printf("Syota kortti, ole hyva.\n\n");

    // Alla oleva funktio tarkistaa tunnusluvun, kysytaan niin kauan kunnes oikea tunnusluku.
    // Tilinumero on tiedoston nimi ilman loppup‰‰tett‰ ja tunnusluku on luku, joka lukee tiedoston sis‰ll‰.
    tarkista_tunnusluku();

    // Pidetaan while loopilla ohjelma kaynnissa, kunnes kayttaja haluaa lopettaa.

    while (ehto == 0){

        tulosta_paavalikko();

        scanf(" %15s", valinta);
        printf("\n");

        // Hyvaksyttyja syotteita ovat joko ensimmainen kirjain tai koko sana.

        if (!strcmp(valinta, "otto") || !strcmp(valinta, "o")){
            n = sizeof(summat) / sizeof(summat[0]);
            muutos = otto_funktio(summat, n, nostettavissa);
            nostettavissa -= muutos;
            saldo -= muutos;
            takaisin_paavalikkoon();
        }

        if (!strcmp(valinta, "saldo") || !strcmp(valinta, "s")){
            tarkista_saldo(saldo, nostoraja, nostettavissa);
            takaisin_paavalikkoon();
        }

        if (!strcmp(valinta, "liittymanlataus") || !strcmp(valinta, "l")){
            n = sizeof(liittyman_valinta) / sizeof(liittyman_valinta[0]);
            muutos = lataa_liittyma(liittyman_valinta, n, lataukset, nostettavissa);
            nostettavissa -= muutos;
            saldo -= muutos;
            takaisin_paavalikkoon();
        }

        if (!strcmp(valinta, "tapahtumat") || !strcmp(valinta, "t")){
            tapahtumat_funktio();
            takaisin_paavalikkoon();
        }

        if (!strcmp(valinta, "q")){
            printf("Kiitos kaynnista ja tervetuloa uudelleen.\n");
            ehto = 1;
        }
    }

    return(0);
}

void tulosta_paavalikko(){
    printf("\n");
    printf("Valitse: otto (o)\n");
    printf("%18s\n", "saldo (s)");
    printf("%28s\n", "liittymanlataus (l)");
    printf("%23s\n", "tapahtumat (t)");
    printf("\n");
    printf("Voit lopettaa nappaimella (q)\n");
}

void takaisin_paavalikkoon(){
    char valinta, alkuun = 'a', lopeta = 'q', ehto = 0;

    printf("\na = Paavalikko, q = Lopeta\n");

    while (ehto == 0) {
        scanf(" %c", &valinta);
        if (valinta == lopeta) {
            printf("Kiitos kaynnista ja tervetuloa uudelleen!\n");
            exit(0);
        }
        if (valinta == alkuun){
            ehto = 1;
        }
    }
    ehto = 0;  // Resetoidaan ehto takaisin nollaksi, jotta paastaan jatkossakin suorittamaan while looppia.
}

double otto_funktio(int summat[], int n, double nostettavissa){
    int summa, i;

    printf("OTTO\n\n");
    printf("20 euroa (1) %12s\n", "90 euroa  (4)");
    printf("40 euroa (2) %13s\n", "140 euroa (5)");
    printf("60 euroa (3) %13s\n", "240 euroa (6)");
    printf("Alkuun   (a) %11s\n", "Muu summa (7)");
    printf("\nValitse haluttu summa: ");
    scanf("%d", &summa);
    for (i=0; i<n; i++){
        if((summa == summat[i]) || (summa == i+1)){
            summa = summat[i];
            if (nostettavissa >= summa)
                printf("Valitsit summan %d euroa\n", summat[i]);
            else{
                printf("Tililla ei ole tarpeeksi varoja\n");
                summa = 0;
                break;
            }
        }
    }
    if (summa == 7){
        printf("Syota haluamasi summa: ");
        scanf("%d", &summa);
        if (summa <= 400){
            if (nostettavissa >= summa){
                printf("Valitsit summan %d euroa\n", summa);
            }
            else{
                printf("Tililla ei ole tarpeeksi varoja\n");
                summa = 0;
                printf("Kortin kateisnostoraja on 400 euroa\n");
                summa = 0;
            }
        }
        else{
            printf("Kortin kateisnostoraja on 400 euroa\n");
            summa = 0;
        }
    }

    return(summa);
}

void tarkista_saldo(double saldo, double nostoraja, double nostettavissa){
    printf("TILIN TILANNE\n\n");
    printf("Tilin saldo %18.2lf+\n", saldo);
    printf("Tililta nostettavissa %8.2lf+\n", nostettavissa);
    printf("Kortin kateisnostovara%8.2lf+\n", nostoraja);
}

double lataa_liittyma(char liittyman_valinta[3][15], int n, int lataukset[], double nostettavissa){

    int valinta, i, numero, valinta1, summa = 0;

    printf("LIITTYMAN LATAUS\n\n");
    printf("Saunalahti (1)\n");
    printf("dna        (2)\n");
    printf("Go Mobile  (3)\n");
    printf("Alkuun     (a)\n");
    scanf("%d", &valinta);
    for (i=0; i<n; i++){
        if (valinta == i+1){
            printf("Syota %s puhelinnumero\n", liittyman_valinta[i]);
            printf("(esim. 041987...)\n");
            scanf("%d", &numero);

            printf("Liittyman lataus\n");
            printf("%s     (1) %5s  (4)\n", "10", "25");
            printf("%s     (2) %5s  (5)\n", "15", "30");
            printf("%s     (3) %5s  (6)\n", "20", "50");
            printf("Alkuun (a) %6s (7)\n", "100");

            printf("\nValitse haluamasi summa: ");
            scanf("%d", &valinta1);
            for (i=0; i<7; i++){
                if((valinta1 == lataukset[i]) || (valinta1 == i+1)){

                    summa = lataukset[i];
                    if (nostettavissa >= summa){
                        printf("Puhelinnumero +358%d\n", numero);
                        printf("Ladattava summa on %d euroa\n", lataukset[i]);
                    }
                    else{
                        printf("Tililla ei ole tarpeeksi varoja\n");
                        summa = 0;
                        break;
                    }
                }
            }
        }

    }
    return(summa);
}

void tapahtumat_funktio(){
    int ehto = 0;
    char valinta, kuitille = 'k', naytolle = 'n';

    printf("TAPAHTUMAT\n\n");
    printf("Haluatko tiedot:\n");
    printf("%25s\n", "Naytolle  (n)");
    printf("%25s\n", "Kuitille  (k)");
    while (ehto == 0){
        scanf(" %c", &valinta);
        if (valinta == naytolle){
            printf("Tapahtumat tulostetaan naytolle.\n");
            ehto = 1;
        }
        if (valinta == kuitille){
            printf("Tapahtumat tulostetaan kuitille.\n");
            ehto = 1;
        }
    }
    ehto = 0; // Resetoidaan ehto takaisin nollaksi.

}

void clearBuffer(void){

   while (fgetc(stdin) != '\n');
}

void tarkista_tunnusluku(void){

    char oikea_tunnus[100], tunnus[100], tilinro[100];
    int tulos = 1, ehto = 1;

    FILE *tiedosto;

    do{

        printf("Syota tilinumero: ");
        fgets(tilinro, 100, stdin);

        if (tilinro[strlen(tilinro)-1] == '\n')
            tilinro[strlen(tilinro)-1] = '\0';
        else
            clearBuffer();

        strcat(tilinro, ".acc");


        if ((tiedosto = fopen(tilinro, "r")) == NULL){
            printf("Vaara tilinumero, yrita uudelleen\n");
        }

        else{
            printf("Syota tunnuslukusi: ");

            fgets(tunnus, 100, stdin);

            if (tunnus[strlen(tunnus) - 1] == '\n')
                tunnus[strlen(tunnus) - 1] = '\0';
            else
                clearBuffer();

            fgets(oikea_tunnus, 100, tiedosto);

            do {

                if (oikea_tunnus[strlen(oikea_tunnus) - 1] == '\n')
                    oikea_tunnus[strlen(oikea_tunnus) - 1] = '\0';

                if ((tulos = strcmp(tunnus, oikea_tunnus)) == 0){
                    ehto = 0;
                }
                else{
                    printf("Vaara tunnusluku, yrita uudelleen: \n");
                }
            }       while (tulos == 1);
        }
    } while (ehto == 1);
}
