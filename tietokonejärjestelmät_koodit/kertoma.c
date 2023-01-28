#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int64_t laske_kertoma(int8_t n);

int main(void)
{
    laske_kertoma(17);

    return (0);
}

int64_t laske_kertoma(int8_t n){

    int64_t kertoma = 1, i;

    if (n <= 21){
        for (i = n; i > 1; i--){
            kertoma = kertoma * i;
        }
    }
    else
        kertoma = -1;

    return(kertoma);
}
