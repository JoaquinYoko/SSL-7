#include <stdio.h>
#include "puntoA.c"
#include "puntoB.c"
#include "puntoC.c"
#include "puntoD.c"
#include "puntoE.c"
#include "puntoF.c"

int main(int argc, char*argv[]){
   
//Test Punto A
    printf("Punto A: \n");
    char stringA[]= "Esto es un string";
    
    printf("String dado: '%s' \n",stringA);
    int valor = length(stringA);
 
    printf("El tamanio del string es: %d \n\n", valor,stringA);
//Test Punto B 
    printf("Punto B: \n");
    char stringB[] ="123456";
    
    printf("String dado: '%s' \n",stringB);
    valor = deStringAInt(stringB);
    printf("String convertido en numero: %d \n\n", valor);
 
//Test Punto C
    printf("Punto C: \n");
    char stringC[]="hola";
    
    printf("String dado: '%s' \n",stringC);
    toMayus(stringC);
    printf("String en Mayuscula: '%s' \n\n",stringC);

//Test Punto D
    printf("Punto D: \n");
    char stringD[]="Electronica";
    char valorQuitado = 'E';

    printf("String dado: '%s' ; caracter a eliminar: '%c' \n",stringD,valorQuitado);
    eliminar(stringD,valorQuitado);
    printf("String sin el valor('%c'): '%s' \n\n",valorQuitado,stringD);

//Test Punto E
    printf("Punto E: \n");
    char stringE1[] = "valorA";
    char stringE2[] = "valorB";
    char stringConcatenado[50];
    
    printf("String 1: '%s' + String 2: '%s' \n",stringE1,stringE2);
    concatenar(stringE1,stringE2,stringConcatenado);
    printf("String concatenado: '%s' \n\n",stringConcatenado);
    

//Test Punto F
    printf("Punto F: \n");
    char stringF[]="012345789";
    
    printf("String dado: '%s' (le falta el '6') \n",stringF);
    agregarCaracter(stringF, '6', 6);
    printf("Agregar el caracter '6' en la posicion 6 del string anterior: %s",stringF);
    
}