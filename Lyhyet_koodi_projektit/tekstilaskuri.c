#include <stdio.h>

int main(void){

    FILE* tiedosto;
    int c;
    int rivit = 1, merkit = 0, ehto = 0;

    tiedosto = fopen("teksti.txt", "r");

    if (tiedosto != NULL){
        for (c = fgetc(tiedosto); c != EOF; c = fgetc(tiedosto)){
            if (c != '\n'){
                merkit++;
                if (ehto == 1){
                    rivit++;
                    ehto = 0;
                }
            }
            else{
                ehto = 1;
                merkit++;
            }
        }
    }
    else{
        printf("Virhe tiedoston avaamisessa!\n");
        perror("fopen");
    }

    printf("Rivit:%d\n", rivit);
    printf("Merkit:%d", merkit);

    fclose(tiedosto);
    return(0);
}
