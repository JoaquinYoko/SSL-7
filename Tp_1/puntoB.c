#include <stdio.h>

int deStringAInt(char* string){
   int num = 0;
   while(*string){
      int a = *string;
   if(a < 48 && a > 57){
      printf("valor no permitido");
      return 0;
   }
   string++;
   num = num*10 + (a - 48);
   }
   return num;
}
