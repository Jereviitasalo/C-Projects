#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

float lampotila(uint16_t rekisteri, float kerroin);

int main(void)
{

    lampotila(15280, 0.03125);

    return 0;
}

float lampotila (uint16_t rekisteri, float kerroin){

    float aste;

    aste = ((rekisteri >> 2) * kerroin);

    return(aste);
}
