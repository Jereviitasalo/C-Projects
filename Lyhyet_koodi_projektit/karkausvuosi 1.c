#include <stdio.h>

// Sadalla jaolliset vuodet eivat ole karkausvuosia paitsi joka 400. vuosi
// esim 2000 on karkausvuosi, mutta 1700 ei ole

// Ohjelma lukee kayttajalta vuoden ja ilmoittaa onko kyseinen vuosi karkausvuosi
//Kaytetaan funktiota jonka parametrina on kayttajan syottama vuosiluku.

void tarkista_karkausvuosi(int year);

int main(void){

    int year;

    printf("Syota haluamasi vuosi: ");
    scanf("%d", &year);
    tarkista_karkausvuosi(year);

    return(0);
}

void tarkista_karkausvuosi(int year){

    if (year >= 0){
        if(year % 400 == 0)
            printf("Vuosi %d on karkausvuosi", year);
        else{
            if (year % 4 == 0){
                if (year % 100 != 0)
                    printf("Vuosi %d on karkausvuosi", year);
                else
                    printf("Vuosi %d ei ole karkausvuosi", year);
            }
            else
                printf("Vuosi %d ei ole karkausvuosi", year);
        }
    }
}
