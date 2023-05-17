void agregarCaracter(char *cadena, char caracter, int pos){
    int i;

    for(i=0; cadena[i]!='\0';i++){
        if (i==pos){
            cadena[i] = caracter;
        }
    }
}