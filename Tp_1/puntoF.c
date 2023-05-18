// f) Modificar la cadena dada con la inserción de un carácter dado en una posición determinada.
void agregarCaracter(char *cadena, char caracter, int pos){
    int i;

    for(i=0; cadena[i]!='\0';i++){
        if (i==pos){
            cadena[i] = caracter;
        }
    }
}