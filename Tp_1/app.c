#include <stdio.h>
#include "puntoA.c"
#include "puntoB.c"
#include "puntoC.c"
#include "puntoD.c"
#include "puntoE.c"
#include "puntoF.c"

int main(){
    char string[]= "Esto es un string";
    int valor = length(string);
    printf("El tamanio es: %d del string (%s) \n", valor,string);

    char string2[] = "123456";
    valor = deStringAInt(string2);
    printf("El numero es: %d de el string (%s)\n", valor,string2);

    toMayus(string);
    printf("Este es el string en mayus (%s) del anterior string\n",string);

    char valorQuitado = 'E';
    eliminar(string,valorQuitado);
    printf("Este es el string sin el valor E: (%s) del anterior string\n",string);

    char stringA[] = "valorA";
    char stringB[] = "valorB";
    char stringConcatenado[50];
    concatenar(stringA,stringB,stringConcatenado);
    printf("Este string %s + este %s es este %s\n",stringA,stringB,stringConcatenado);


    agregarCaracter(string, 'a', 0);
    printf("Agregar el caracter a en la posicion 1 de la string anterior : %s",string);
}