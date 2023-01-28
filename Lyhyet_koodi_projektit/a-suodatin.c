#include <stdio.h>
#include <string.h>

int main(void){

    char merkkijonot[5][50];
    int i;

    for (i = 0; i < 5; i++){

        printf("Anna merkkijono (max 100 merkkia) > ");
        scanf("%s", merkkijonot[i]);
    }

    for (i = 0; i < 5; i++){

        if (!strncmp(merkkijonot[i], "a", 1))
            printf("\"a\"-merkilla alkava merkkijono \"%s\"\n", merkkijonot[i]);
    }


    return(0);
}
