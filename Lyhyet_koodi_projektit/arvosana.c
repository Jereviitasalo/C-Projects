#include <stdio.h>
#include <stdlib.h>

int main(void){

    int pisteet;

    printf("Syota kokeestasi saadut pisteet: ");
    scanf("%d", &pisteet);

    if (pisteet < 0)
        printf("Virheelinen pistemaara");

    if (pisteet < 25){
        if (pisteet > 22)
            printf("5\n");
        else
            if (pisteet < 23){
                if (pisteet > 19)
                    printf("4\n");
                else
                    if (pisteet < 20){
                        if (pisteet > 16)
                            printf("3\n");
                        else
                            if (pisteet < 17){
                                if (pisteet > 13)
                                    printf("2\n");
                                else
                                    if (pisteet < 14){
                                        if (pisteet > 11)
                                            printf("1\n");
                                        else
                                            if (pisteet < 12){
                                                if (pisteet >= 0)
                                                    printf("Hylatty\n");
                                            }
                                    }
                            }

                    }
            }
    }
    else
        printf("Virheellinen pistemaara");


    return(0);
}
