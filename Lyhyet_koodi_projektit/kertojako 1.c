#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int division(int num1, int num2);
int multiplication(int num1, int num2);

int main(void){

    int check = 0, num1 = 0, num2 = 0, result;

    srand(time(NULL));

    printf("Anna luku -1 lopettaaksesi\n");
    while(result != -1){
        num1 = rand() % 9 + 1;
        num2 = rand() % 9 + 1;
        if (num1 % num2 != 0){
            printf("Paljonko on %d kertaa %d ", num1, num2);
            check = multiplication(num1, num2);
            scanf("%d", &result);
            if (result == -1)
                    break;
            while (check != result){
                printf("Vaarin, yrita uudelleen > ");
                scanf("%d", &result);
                if (result == -1)
                    break;
            }
            if (check == result)
                printf("Oikein!\n");
        }
        else{
            printf("Paljonko on %d jaettuna %d ", num1, num2);
            check = division(num1, num2);
            scanf("%d", &result);
            while (check != result){
                printf("Vaarin, yrita uudelleen > ");
                scanf("%d", &result);
                if (result == -1)
                    break;
            }
            if (check == result)
                printf("Oikein!\n");
        }
    }


    return(0);
}

int division(int num1, int num2){

    int result = 0;

    result = num1 / num2;

    return(result);
}

int multiplication(int num1, int num2){

    int result = 0;

    result = num1 * num2;

    return(result);
}
