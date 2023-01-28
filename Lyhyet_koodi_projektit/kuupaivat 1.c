#include <stdio.h>

int paivienLukumaaraKuukaudessa(int i);

int main(void){

    int kuukausi;

    printf("Syota haluamasi kuukausi\n");
    printf("Ohjelma laskee kuinka monta paivaa kuukaudessa on\n");
    scanf("%d", &kuukausi);
    paivienLukumaaraKuukaudessa(kuukausi);

    return(0);
}

int paivienLukumaaraKuukaudessa(int i){

    int kuukaudet[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int paivat = 0;

    if ((i > 12) || (i < 1))
        paivat = -1;
    else
        paivat = kuukaudet[i - 1];

    if (paivat == -1)
        printf("Kuukautta %d ei ole olemassa", i);
    else
        printf("kuukaudessa %d on %d paivaa", i, paivat);

    return;
}
