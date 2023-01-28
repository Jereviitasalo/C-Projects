#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <time.h>

void movavg(float *array, uint8_t array_size, uint8_t window_size);

int main(void)
{
    srand(time(NULL));

    float data[5] = {1.0, 2.0, 4.0, 6.0, 9.0};

    movavg(data, 5, 3);

    return (0);
}

void movavg(float *array, uint8_t array_size, uint8_t window_size){

    uint8_t i, j;
    uint8_t summa[] = {};
    float keskiarvo, pituus_summa;

    for (j = 0; j <= (array_size - window_size); j++){
        for (i = 0; i < window_size; i++){
            summa[j] += array[i];
        }
    }
    pituus_summa = sizeof(summa)/sizeof(summa[0]);

    for(i = 0; i <= pituus_summa; i++){
        keskiarvo = summa[i] / window_size;
        printf("%.2lf, ", keskiarvo);
    }

    return;
}
