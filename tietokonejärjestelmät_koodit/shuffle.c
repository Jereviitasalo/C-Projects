#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

void shuffle(uint8_t *list, uint16_t list_size);

int main(void)
{
    uint8_t list[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    srand(time(NULL));
    shuffle(list, 8);

    return (0);
}

void shuffle(uint8_t *list, uint16_t list_size){

    uint16_t i, j, n, random_lista[list_size] = {};

        for (i = 0; i < list_size; i++){
            n = rand() % ((8 - 1) + 1) + 1;
            random_lista[i] = n;
        }

        i = 1;
        j = 0;
        random_lista[0] = list[0];


        while(i < list_size){
            if (random_lista[i] != list[j]){
                list[++j] = random_lista[i];
                i++;
            }
        }

        for (i = 0; i < list_size; i++) {
        printf("%d ", list[i]);
        }

    return;
}
