#include <stdio.h>

int main(void){

    int luku, i, jaannos, j = 0, k = 1;

    printf("Syota viisinumeroinen kokonaisluku: ");
    scanf("%d", &luku);

    for (i = 10000; i >= 10; i = i / 10){

        jaannos = (luku / i) - ((luku / i) / 10);
        printf("%d ", jaannos);
        k = k * 10;
        j = k;
    }

    return(0);
}
