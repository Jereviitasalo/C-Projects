#include <stdio.h>

int onkoLukuTaydellinen(int luku);

int main(void){
    int i, result = 0;

    for (i = 1; i <= 10000; i++){
        result = onkoLukuTaydellinen(i);
        if (result == 1)
            printf("\nLuku %d on taydellinen luku", i);
    }

  return(0);
}

int onkoLukuTaydellinen(int luku){

    int remainder, divider = 1, result = 0, sum = 0;

    for (divider = 1; divider <= luku; divider++){
        remainder = luku % divider;
        if (remainder == 0){
            if (luku != divider){
                sum += divider;
            }
        }
    }
    if (sum == luku){
        result = 1;
    }

    return(result);
}
