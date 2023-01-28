#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int multiplication(int numb1, int numb2);

int main(void){

    int numb1 = 0, numb2 = 0, result, check;

    srand(time(NULL));

    printf("Anna luku -1 lopettaaksesi\n");
    while (result != -1){
        numb1 = rand() % 9 + 1;
        numb2 = rand() % 9 + 1;
        printf("Paljonko on %d kertaa %d > ", numb1, numb2);
        check = multiplication(numb1, numb2);
        scanf("%d", &result);
        while (result != check){
            if (result == -1)
                break;
            printf("Vaarin, yrita uudelleen > ");
            scanf("%d", &result);
        }
        if (result == check)
            printf("Oikein!\n");
    }

    return(0);
}

int multiplication(int numb1, int numb2){

    int result;

    result = numb1 * numb2;

    return(result);
}
