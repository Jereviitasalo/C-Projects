#include <stdio.h>

int main(void){

    double luku = 0, summa = 0, keskiarvo = 0, i = 0;

    printf("Syota positiivisia lukuja, ohjelma laskee niiden keskiarvon\n");
    printf("Ohjelma lopettaa kun syotat negatiivisen arvon\n");

    while (luku >= 0){
        scanf("%lf", &luku);
        if (luku < 0)
            break;
        summa += luku;
        i++;
    }

    keskiarvo = summa / i;
    printf("%.2lf", keskiarvo);


    return(0);
}
