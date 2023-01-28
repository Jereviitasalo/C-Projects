#include <stdio.h>

double laskeParkkiMaksu (double tunnit);

int main(void){

    double pysakointiaika, veloitus[3], aika[3], kaikki_tunnit = 0, kaikki_maksut = 0;
    int i, asiakas[3] = {1, 2, 3};

    printf("Syota pysakointiaikasi tunteina: \n");
    for (i = 0; i < 3; i++){
    scanf("%lf", &pysakointiaika);
    veloitus[i] += laskeParkkiMaksu(pysakointiaika);
    aika[i] = pysakointiaika;
    kaikki_maksut += veloitus[i];
    kaikki_tunnit += pysakointiaika;
    }
    printf("%8s%8s%11s\n", "Asiakas", "Tunnit", "Veloitus");
    for (i = 0; i < 3; i++){
        printf("%8d%8.2lf%12.2lf\n", asiakas[i], aika[i], veloitus[i]);
    }
    printf("%s%8.2lf%12.2lf\n", "YHTEENSA", kaikki_tunnit, kaikki_maksut);



    return(0);
}

double laskeParkkiMaksu(double tunnit){

    double lisamaksu = 0, maksu = 0, tulos = 0, kokonaismaksu = 0, kokonaislisamaksu = 0;

    lisamaksu = 0.5;
    maksu = 2;

    while (tunnit > 0){
        if (tunnit >= 24){
            tulos += 10;
            tunnit -= 24;
        }
        if (tunnit < 24){
            while (tunnit > 0){
                if (tunnit > 3){
                    kokonaislisamaksu += lisamaksu;
                    tunnit--;
                }
                if (tunnit <= 3){
                    kokonaismaksu = maksu;
                    tunnit--;
                }
            }
            if ((kokonaismaksu + kokonaislisamaksu) > 10)
                tulos += 10;
            else
                tulos += (kokonaismaksu + kokonaislisamaksu);
        }
    }

    return(tulos);
}
