#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rahan_heitto(int * klaavat, int * kruunat);

int main(void){

    int kruunat0, klaavat0;

    srand(time(NULL));

    rahan_heitto(&klaavat0, &kruunat0);
    printf("Heittojen tulos: %d kruunua ja %d klaavaa", kruunat0, klaavat0);

    return(0);
}

int rahan_heitto(int * klaavat, int * kruunat){

    int heittojen_lkm = 1, luku = 0;
    *klaavat = 0;
    *kruunat = 0;

    while(heittojen_lkm <= 100){

        luku = rand() % 2;
        if (luku == 1)
            *klaavat += 1;
        else
            *kruunat += 1;

        heittojen_lkm++;
    }
}
