#include <stdio.h>

// d) Eliminar de una cadena dada todas las ocurrencias de un carácter dado.
void eliminar(char* cadena, char caracter)
{
int i, j;

for(i=0; cadena[i] != '\0' ; i++)
{
    if(cadena[i] == caracter){ 
        for(j=i; cadena[j]!= '\0'; j++)
            {*(cadena+j)= *(cadena+j+1);}
        i--; 
    }
}
return;
}