#include <stdio.h>
#include <string.h>

char* mystrcpy(char* kohde, const char* lahde);
char* mystrcat(char* kohde, char* lahde);


char* mystrcpy(char* kohde, const char* lahde){

    while (*lahde != '\0'){
        *kohde++ = *lahde++;
    }
    *kohde = '\0';

    return(kohde);
}

char* mystrcat(char* kohde, char* lahde){

    while (*kohde != '\0'){
        *kohde++;
    }

    while(*lahde != '\0'){
        *kohde++ = *lahde++;
    }
    *kohde = '\0';

    return(kohde);
}
