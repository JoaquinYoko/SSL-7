#include <stdio.h>

// e) Concatenar al final de la primera cadena dada una segunda cadena también dada.
void concatenar(char primero[], char segundo[], char destino[])
{
	int i=0, j=0;
	while(primero[i] != '\0'){
		destino[i]=primero[i];
		i++;
	}
	while(segundo[j] != '\0'){
		destino[i+j]= segundo[j];
		j++;
	}	
	destino[i+j+1] = '\0';
}
