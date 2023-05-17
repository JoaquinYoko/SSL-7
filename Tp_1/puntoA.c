#include <stdio.h>

int length(char* string){
    int longitud = 0;
    while(*string){
        longitud++;
        string++;
    }
    return longitud;
} 
