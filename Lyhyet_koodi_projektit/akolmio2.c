#include <stdio.h>

int main(void){

    char kirjain = 'a';
    int i, luku = 0, valit;

    for (i = 1; i <= 8; i++){
        valit = 8;
        valit -= 1 * i;
        while (luku < i){
            while (valit > 0){
                printf(" ");
                valit--;
            }
            printf("%c", kirjain);
            luku++;
        }
        printf("\n");
        luku = 0;

    }

    return(0);
}
