#include <stdio.h>
#include <string.h>

void etsiMerkkijonoAlusta(char *ptr1, char *ptr2, char *ptr3);

int main(void) {

    char mjono1[100];
    char mjono2[100];
    char loydetty[10]={'\0'};

    char *ptr1 = mjono1;
    char *ptr2 = mjono2;
    char *ptr3 = loydetty;

    printf("Syota kaksi merkkijonoa.\n");
    printf("Anna ensimmäinen merkkijono: ");
    scanf("%s", ptr1);
    printf("Anna toinen merkkijono: ");
    scanf("%s", ptr2);

    etsiMerkkijonoAlusta(ptr1, ptr2, ptr3);

    printf("%s", ptr3);

    return (0);
}

void etsiMerkkijonoAlusta(char *ptr1, char *ptr2 , char *ptr3) {

    while (*ptr1 != '\0'){
        if (*ptr1 == *ptr2)
            *ptr3 = *ptr1;
        else
            break;
        ptr1++;
        ptr2++;
        ptr3++;
    }
}
