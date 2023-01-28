#include <stdio.h>
#include <math.h>

double pyoristaKokonaisluvuksi(double luku);
double pyoristaKymmenesosat(double luku);
double pyoristaSadasosat(double luku);
double pyoristaTuhannesosat(double luku);

int main(void){

    double luvut[5], kymmenesosa = 0, sadasosa = 0, tuhannesosa = 0;
    double kokonaisluku = 0;
    int i;

    printf("Syota 5 lukua\n");

    for(i=0; i<5; i++){
        scanf("%lf", &luvut[i]);
    }

    for (i=0; i<5; i++){
        kokonaisluku = pyoristaKokonaisluvuksi(luvut[i]);
        printf("%lf %lf\n", luvut[i], kokonaisluku);

        kymmenesosa = pyoristaKymmenesosat(luvut[i]);
        printf("%lf %lf\n", luvut[i], kymmenesosa);

        sadasosa = pyoristaSadasosat(luvut[i]);
        printf("%lf %lf\n", luvut[i], sadasosa);

        tuhannesosa = pyoristaTuhannesosat(luvut[i]);
        printf("%lf %lf\n\n", luvut[i], tuhannesosa);
    }

    return(0);
}

double pyoristaKokonaisluvuksi(double luku){

    double y = 0;

    y = floor(luku + 0.5);

    return(y);
}

double pyoristaKymmenesosat(double luku){

    double y = 0;
    y = floor(luku * 10 + 0.5) / 10;

    return(y);
}

double pyoristaSadasosat(double luku){

    double y = 0;
    y = floor(luku * 100 + 0.5) / 100;

    return(y);
}

double pyoristaTuhannesosat(double luku){

    double y = 0;
    y = floor(luku * 1000 + 0.5) / 1000;

    return(y);
}
