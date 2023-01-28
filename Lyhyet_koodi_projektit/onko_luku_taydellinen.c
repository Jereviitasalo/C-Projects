#include <stdio.h>
#include <math.h>


int onkoLukuTaydellinen( void );

int main(void){


    onkoLukuTaydellinen();

    return(0);
}

int onkoLukuTaydellinen( void ){

    int luku = 1;
    int jakaja = 1, jakojaannos, summa = 0;

    while(luku <= 10000){
        while (jakaja != luku){
            jakojaannos = luku % jakaja;
            if (jakojaannos == 0){
                if (jakaja != luku)
                    summa += jakaja;
            }
            jakaja++;
        }
        jakaja = 1;
        if (summa != 0){
            if (summa == luku)
                printf("\nLuku %d on taydellinen luku\n", luku);
        }
        luku++;
        summa = 0;
    }
    return(summa);
}
