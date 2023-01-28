#include <stdio.h>
#include <inttypes.h>

int8_t tictactoe_check(int8_t * gameboard, int win_len);

int main(void) {

    int8_t gameboard[100];
    int win_len;

    tictactoe_check(gameboard, win_len);

    return(0);
}

int8_t tictactoe_check(int8_t * gameboard, int win_len){

    int8_t ristit = 0, nollat = 0, voittaja = 0, j, i, voitto_n = 0, voitto_r = 0, n = 0;

    // Vaakariville

    for (j = 0; j < 100; j+=10){
        for(i = j; i < (9 + j); i++){
            if (gameboard[i] == 1){
                ristit += gameboard[i];
                nollat = 0;
            }
            if (gameboard[i] == 2){
                nollat += gameboard[i];
                ristit = 0;
            }
            if (gameboard[i] == 0){
                nollat = 0;
                ristit = 0;
            }
            if (ristit >= win_len)
                voitto_r = 1;
            if (nollat >= win_len)
                voitto_n = 1;
        }
    }

    ristit = 0;
    nollat = 0;

    // Pystyriville

    for (i = 0; i < 10; i++){
        for(j = i; j <= (90 + i); j+=10){
            if (gameboard[j] == 1){
                ristit += gameboard[i];
                nollat = 0;
            }
            if (gameboard[j] == 2){
                nollat += gameboard[i];
                ristit = 0;
            }
            if (gameboard[j] == 0){
                nollat = 0;
                ristit = 0;
            }
            if (ristit >= win_len)
                voitto_r = 1;
            if (nollat >= win_len)
                voitto_n = 1;
        }
    }

    nollat = 0;
    ristit = 0;

    // Kenoviivat oikealta ylhaalta puoleen valiin.

    for (j = 9; j >= 0; j--){
        for(i = j; i <= j + (11*n); i+=11){
            if (gameboard[i] == 1){
                    ristit += gameboard[i];
                    nollat = 0;
            }
            if (gameboard[i] == 2){
                nollat += gameboard[i];
                ristit = 0;
            }
            if (gameboard[i] == 0){
                nollat = 0;
                ristit = 0;
            }
            if (ristit >= win_len)
                voitto_r = 1;
            if (nollat >= win_len)
                voitto_n = 1;
        }
        n++;
    }

    n = 9;

    // Kenoviivat vasemmalta ylhaalta loput puolet

    for (j = 99; i >= 90; j--){
        for(i = j; i >= j - (11*n); i-=11){
            if (gameboard[i] == 1){
                    ristit += gameboard[i];
                    nollat = 0;
            }
            if (gameboard[i] == 2){
                nollat += gameboard[i];
                ristit = 0;
            }
            if (gameboard[i] == 0){
                nollat = 0;
                ristit = 0;
            }
            if (ristit >= win_len)
                voitto_r = 1;
            if (nollat >= win_len)
                voitto_n = 1;
        }
        n--;
    }

    nollat = 0;
    ristit = 0;

    // Kenoviivat toisinpain

    n = 0;

    for (i = 0; i < 10; i++){
        for(j=i;j<i+(9*n);j+=9){
            if (gameboard[i] == 1){
                    ristit += gameboard[i];
                    nollat = 0;
            }
            if (gameboard[i] == 2){
                nollat += gameboard[i];
                ristit = 0;
            }
            if (gameboard[i] == 0){
                nollat = 0;
                ristit = 0;
            }
            if (ristit >= win_len)
                voitto_r = 1;
            if (nollat >= win_len)
                voitto_n = 1;
        }
    }

    for (i = 99; i >= 90; i--){
        for(j=i;j>=i-(9*n);j-=9){
            if (gameboard[i] == 1){
                    ristit += gameboard[i];
                    nollat = 0;
            }
            if (gameboard[i] == 2){
                nollat += gameboard[i];
                ristit = 0;
            }
            if (gameboard[i] == 0){
                nollat = 0;
                ristit = 0;
            }
            if (ristit >= win_len)
                voitto_r = 1;
            if (nollat >= win_len)
                voitto_n = 1;
        }
    }

    if ((voitto_r == 1) && (voitto_n == 1))
        voittaja = 0;

    if (voitto_r == 1)
        voittaja = 1;

    if (voitto_n == 1)
        voittaja = 2;


    return(voittaja);
}
