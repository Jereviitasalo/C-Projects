#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sekunneiksi(int tunnit, int minuutit, int sekunnit);

int main(void){

    int tunnit, minuutit, sekunnit, aika1 = 0, aika2 = 0, aikaero = 0;
    int muunnos_tunnit = 0, muunnos_minuutit = 0, muunnos_sekunnit = 0;

    printf("Syota kaksi eri kellonaikaa, ohjelma laskee näiden välisen aikaeron.\n");
    printf("Syota tunnit\n");
    scanf("%d", &tunnit);
    printf("Syota minuutit\n");
    scanf("%d", &minuutit);
    printf("Syota sekunnit\n");
    scanf("%d", &sekunnit);
    aika1 = sekunneiksi(tunnit, minuutit, sekunnit);
    printf("Syota toinen kellonaika\n");
    printf("Syota tunnit\n");
    scanf("%d", &tunnit);
    printf("Syota minuutit\n");
    scanf("%d", &minuutit);
    printf("Syota sekunnit\n");
    scanf("%d", &sekunnit);
    aika2 = sekunneiksi(tunnit, minuutit, sekunnit);

    aikaero = abs (aika1 - aika2);
    muunnos_tunnit = (aikaero / 60) / 60;
    muunnos_minuutit = (aikaero / 60) - (muunnos_tunnit * 60);
    muunnos_sekunnit = aikaero - ((muunnos_tunnit * 60) * 60) - (muunnos_minuutit * 60);
    printf("Aikaero on %d\n", aikaero);
    printf("Aika on %d tuntia %d minuuttia %d sekuntia", muunnos_tunnit, muunnos_minuutit, muunnos_sekunnit);



    return(0);
}

int sekunneiksi(int tunnit, int minuutit, int sekunnit){

    int aika_sekunteina;

    aika_sekunteina = (tunnit * 60 * 60) + (minuutit * 60) + sekunnit;

    return(aika_sekunteina);
}
