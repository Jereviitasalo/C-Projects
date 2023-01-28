#include <stdio.h>
#include <inttypes.h>

void merkkilaskuri(char *str, uint8_t *tulos);

int main(void) {

    uint8_t vokaalit = 0, konsonantit = 0;

    char tulos[2] = {vokaalit, konsonantit};
    char str[30] = "aaaiiieiuokjhmngf";
    merkkilaskuri(str, tulos);
    printf("vokaaleja on: %d ja konsonantteja on: %d", tulos[0], tulos[1]);
    return (0);
}

void merkkilaskuri(char *str, uint8_t *tulos){

    uint8_t i = 0;

    while (str[i] != '\0'){

        if((str[i] >= 65 && str[i] <= 90)|| (str[i] >= 97 && str[i] <= 122)){

            if(str[i] == 'a'|| str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O' ||str[i] == 'U')
                *tulos += 1;
            else
                *(tulos + 1) += 1;
        }
        i++;
    }

    return;
}
