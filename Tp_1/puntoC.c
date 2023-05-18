#include <stdio.h>

// c) Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en
//mayuscula.

void toMayus(char* cadena)
{
    while(*cadena)
    {
        if(*cadena >= 97 && *cadena <= 122)
        {
          *cadena = *cadena - 32;
        }

       cadena++;
    }
}

