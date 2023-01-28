#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int coin_flip();

int main(void){

    int i, tails = 0, crown = 0, result = 0;

    srand(time(NULL));

    for (i = 1; i <= 100; i++){
        result = coin_flip();
        if (result == 1)
            tails++;
        else
            crown++;
    }
    printf("Heittojen tulos: %d kruunua ja %d klaavaa", crown, tails);


    return(0);
}

int coin_flip(){

    int result = 0;

    result = rand() % 2;

    return(result);
}
