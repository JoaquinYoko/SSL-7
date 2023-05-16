
#include <stdio.h>

int longitudCadena(char* cadena){
    int contador = 0;

    while (cadena[contador] != '\0'){
        contador++;
    }
    return contador+1;
}

int main()
{
    char* cad = "hola";
    int leng = longitudCadena(cad); 

    printf("%d", leng);
}