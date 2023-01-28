#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <math.h>

float ilmanpaine(uint8_t xlsb, uint8_t lsb, uint8_t msb);

int main(void)
{
    float tulos;

    tulos = ilmanpaine(0b11011110, 0b10111100, 0b00011000);
    printf("%.3lf", tulos);


    return 0;
}

float ilmanpaine(uint8_t xlsb, uint8_t lsb, uint8_t msb){

    float P;
    uint8_t leikattu_xlsb;
    uint32_t i;

    // rekisterien muistipaikat alla
    // msb = 0xF7 = 11110111
    // lsb = 0xF8 = 11111000
    // xlsb = 0xF9 = 11111001

    // Pitaa viela leikata xlsb poikki keskelta, eli pitaa ottaa laskuun mukaan vain bitit 4-7, vaikka periaaatteessa riittaisi etta vain
    //siirrettaisiin bitteja 4 bitin verran oikealle, jolloin saataisiin myos vain bitit 4-7. Eli & operaatio on turha.

    leikattu_xlsb = (xlsb & 0b11110000) >> 4;

    //Nyt saatiin siis yhteensa 20 bittia (kaksi 8 bitin rekisteria ja yksi 4 bitin rekisteri)

    i = (((msb << 8) | lsb) << 4) | leikattu_xlsb;
    P = i;

    return(P);
}
