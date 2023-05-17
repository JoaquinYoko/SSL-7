#include <stdio.h>


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