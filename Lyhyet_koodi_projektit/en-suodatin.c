#include <stdio.h>
#include <string.h>

int main(void){

    char merkkijonot[5][50];
    int i, pituus = 0;

    for (i=0; i<5; i++){
        printf("Anna merkkjono (max 100 merkkia) > ");
        scanf("%s", merkkijonot[i]);
    }

    for (i=0; i<5; i++){

        pituus = strlen(merkkijonot[i]);
        const char *kaksi_vikaa = &merkkijonot[i][pituus-2];

        if (!strcmp(kaksi_vikaa, "en"))
            printf("\"en\"-merkkijonoon paattyva merkkijono \"%s\"\n", merkkijonot[i]);
    }

    return(0);
}
