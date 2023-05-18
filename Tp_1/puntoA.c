#include <stdio.h>

// a) Calcular y retornar la longitud de una cadena dada.

int length(char* cadena){
    int longitud = 0;
    while(*cadena){
        longitud++;
        cadena++;
    }
    return longitud;
} 
