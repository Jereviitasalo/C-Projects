#include <stdio.h>

int main(void){

    char kirjain = 'a';
    int i, luku = 0;

    for (i = 1; i <= 8; i++){
        while (luku < i){
            printf("%c", kirjain);
            luku++;
        }
        printf("\n");
        luku = 0;

    }

    return(0);
}
