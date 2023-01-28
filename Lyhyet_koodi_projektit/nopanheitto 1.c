#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int i = 0, noppa1 = 0, noppa2 = 0, summa = 0;
    int summat[11] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    srand(time(NULL));

    while (i < 36000){
        noppa1 = rand() % 6 + 1;
        noppa2 = rand() % 6 + 1;
        summa = noppa1 + noppa2;
        summat[summa-2]++;
        i++;
    }
    printf("%8s%12s\n", "Summa", "Lukumaara");
    for (i=0; i<11; i++){
        printf("%8d   %9d\n", i+2, summat[i]);
    }
    printf("%s%12d", "YHTEENSA", 36000);

    return(0);
}
