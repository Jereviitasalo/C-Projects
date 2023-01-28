#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <math.h>

float valoisuus(uint16_t rekisteri);

int main(void)
{

    valoisuus(0b0110110000110101);

    return 0;
}

float valoisuus(uint16_t rekisteri){

    float lux;
    uint16_t MaskE, MaskR, E, R;

    // E3-E0: MaskE -> 1111000000000000 = 0xF000
    // R11-R0: MaskR -> 0000111111111111 = 0x0FFF
    // ohjausmaski = MaskE | MaskR;
    //toisinsanoen ohjausmaski ilman vakioita on:
    // ohjausmaski = 0xF000 | 0x0FFF;
    MaskE = 0xF000;
    MaskR = 0x0FFF;
    E = (rekisteri & MaskE) >> 12;
    R = (rekisteri & MaskR);



    lux = 0.01 * pow(2, E) * (R);

    return(lux);
}
