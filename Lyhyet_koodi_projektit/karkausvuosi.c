#include <stdio.h>

int onkoKarkausvuosi(int vuosiluku);

int main(void){

    int vuosiluku0, karkausvuosi;

    printf("Syota vuosiluku: ");
    scanf("%d", &vuosiluku0);

    karkausvuosi = onkoKarkausvuosi(vuosiluku0);
    if (karkausvuosi == 1)
        printf("Vuosi %d on karkausvuosi", vuosiluku0);
    else
        printf("Vuosi %d ei ole karkausvuosi", vuosiluku0);




    return(0);
}

int onkoKarkausvuosi(int vuosiluku){

    int karkausvuosi = 0;
    int jakojaannos_4sata, jakojaannos_1sata, jakojaannos_yksi;

    jakojaannos_4sata = vuosiluku % 400;
    jakojaannos_1sata = vuosiluku % 100;
    jakojaannos_yksi = vuosiluku % 4;

    if (jakojaannos_4sata == 0)
        karkausvuosi = 1;
    else{
        if (jakojaannos_yksi == 0){
            if (jakojaannos_1sata != 0)
                karkausvuosi = 1;
        }
    }

    return(karkausvuosi);
}
