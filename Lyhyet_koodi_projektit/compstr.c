#include <stdio.h>

char omaStrcmp(char *mjono1, char *mjono2);

int main(void){

    char mjono1[25];
    char mjono2[25];
    int tulos = 0;

    printf("Syota kaksi merkkijonoa\n");
    scanf("%s", mjono1);
    scanf("%s", mjono2);
    tulos = omaStrcmp(mjono1, mjono2);
    if (tulos == 0)
        printf("%s == %s", mjono1, mjono2);
    if (tulos == 1)
        printf("%s > %s", mjono1, mjono2);
    if (tulos == 2)
        printf("%s < %s", mjono1, mjono2);

    return(0);
}

char omaStrcmp(char *mjono1, char *mjono2){

    int a;

    char *pA = &mjono1[0];
    char *pB = &mjono2[0];

    while (*pA == *pB){
        *pB++ = *pA++;
        if (*pA == '\0' && *pB == '\0'){
            a = 0;
            break;
        }
        if (*pA > *pB){
            a = 1;
            break;
        }
        if (*pA < *pB){
            a = 2;
            break;
        }
    }


    return a;
}
