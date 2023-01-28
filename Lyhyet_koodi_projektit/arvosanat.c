#include <stdio.h>
#include <stdlib.h>

int main(void){

    int pisteet;

    printf("Syota kokeestasi saadut pisteet: ");
    scanf("%d", &pisteet);

    switch (pisteet){

    case 0 ... 11:
        printf("Hylatty\n");
        break;

    case 12 ... 13:
        printf("1\n");
        break;

    case 14 ... 16:
        printf("2\n");
        break;

    case 17 ... 19:
        printf("3\n");
        break;

    case 20 ... 22:
        printf("4\n");
        break;

    case 24 ... 23:
        printf("5\n");
        break;

    default:
        printf("Virheellinen pistemaara");
        break;

    }

    return(0);
}
