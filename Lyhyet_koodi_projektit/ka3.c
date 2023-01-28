#include <stdio.h>

int main(void){

    double keskiarvo = 0, summa = 0, luku, i;

    for (i = 0; i >= 0; i++){
        scanf("%lf", &luku);
        if (luku < 0)
            break;
        summa += luku;
    }
    keskiarvo = summa / i;

    printf("%.2lf", keskiarvo);

    return(0);
}
