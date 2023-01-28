#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
}koordinaatit;

double koko_pituus(koordinaatit h, koordinaatit t);
koordinaatit koordinaattien_luku(int indeksi);

int main(void){

    koordinaatit tiedot[5];
    double etaisyys = 0, linnun_tie = 0;
    int i;

    // Talletetaan koordinaatit listaan nimeltä tiedot

    for(i=0; i<5; i++){
        tiedot[i] = koordinaattien_luku(i);
    }

    for (i=0; i<4; i++){
        etaisyys += koko_pituus(tiedot[i], tiedot[i+1]);
    }

    linnun_tie = koko_pituus(tiedot[0], tiedot[4]);

    printf("Etaisyys mutkitellen on: %.3lf\n", etaisyys);
    printf("Alku ja loppupisteiden valinen etaisyys on %.3lf", linnun_tie);

    return(0);
}

koordinaatit koordinaattien_luku(int indeksi){

    koordinaatit j;

    printf("Syota %d. x-koordinaatti: ", indeksi+1);
    scanf("%d", &j.x);
    printf("Syota %d. y-koordinaatti: ", indeksi+1);
    scanf("%d", &j.y);

    return(j);
}

double koko_pituus(koordinaatit h, koordinaatit t){

    double osa_tulos = 0, erotus_x = 0, erotus_y = 0;

    erotus_x = t.x - h.x;
    erotus_y = t.y - h.y;

    osa_tulos = sqrt((pow(erotus_x,2) + (pow(erotus_y,2))));

    return(osa_tulos);
}

/*

typedef struct {
    int x;
    int y;
} Koordinaatit;

Koordinaatit LueKoordinaatit(void);
double LaskeEtaisyys(Koordinaatit k, Koordinaatit l);

int main(void) {

    int i;

    double  koko_pituus = 0,
            etaisyys_linnuntieta = 0;

    Koordinaatit rekisteri[5];

    // Luetaan koordinaatit taulukkoon
    for (i = 0; i < 5; i++)
        rekisteri[i] = LueKoordinaatit();

    // Lasketaan pisteiden välinen etäisyys mutkitellen
    for (i = 0; i < (4); i++)
        koko_pituus += LaskeEtaisyys(rekisteri[i], rekisteri[i+1]);

    // Lasketaan alku- ja loppupisteiden välinen etäisyys linnuntietä
    etaisyys_linnuntieta = LaskeEtaisyys(rekisteri[0], rekisteri[4]);

    printf("Etaisyys mutkitellen on %.3lf\n", etaisyys_mutkitellen);
    printf("Alku ja loppupisteiden valinen etaisyys on %.3lf\n", etaisyys_linnuntieta);

    return(0);
}

Koordinaatit LueKoordinaatit(void) {

    Koordinaatit k;

    printf("Anna x-koordinaatti > ");
    scanf("%d", &k.x);

    printf("Anna y-koordinaatti > ");
    scanf("%d", &k.y);

    return(k);
}

double LaskeEtaisyys(Koordinaatit k, Koordinaatit l) {

    double hypotenuusa = 0;

    int kateetti_1, kateetti_2;

    kateetti_1 = (l.x - k.x);
    kateetti_2 = (l.y - k.y);

    hypotenuusa = sqrt(pow(kateetti_1, 2) + pow(kateetti_2, 2));

    return(hypotenuusa);
}
*/
