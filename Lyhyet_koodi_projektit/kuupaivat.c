#include <stdio.h>

int paivienLukumaaraKuukaudessa(int kk);

int main(void){

    int tulostus, kuukausi;


    printf("Syota haluamasi kuukausi (1-12)");
    scanf("%d", &kuukausi);

    tulostus = paivienLukumaaraKuukaudessa(kuukausi);
    if (tulostus != -1)
        printf("Kuukaudessa %d on %d paivaa\n", kuukausi, tulostus);
    else
        printf("Kuukautta %d ei ole olemassa\n", kuukausi);


    return(0);
}

int paivienLukumaaraKuukaudessa (int kk){

    int tulostus;

    int paivat[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (kk < 1)
        tulostus = -1;
    else{
        if (kk > 12)
            tulostus = -1;
        else
            tulostus = paivat[kk - 1];
    }

    return(tulostus);
}
