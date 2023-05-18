#include <stdio.h>

// b) Convertir una cadena de dígitos en su equivalente numérico.

int deStringAInt(char* cadena){
   int num = 0;
   while(*cadena){
      int a = *cadena;
   if(a < 48 && a > 57){
      printf("valor no permitido");
      return 0;
   }
   cadena++;
   num = num*10 + (a - 48);
   }
   return num;
}
