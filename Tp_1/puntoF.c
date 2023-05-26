// f) Modificar la cadena dada con la inserción de un carácter dado en una posición determinada.
void agregarCaracter(char *cadena, char caracter, int pos){
    
    int i=pos;
    while(*(cadena+i)!='\0'){
        i++;
    }
    while(i!=(pos-1)){
        *(cadena+i+1) = *(cadena+i);
        i--;
    }
    *(cadena+pos) = caracter;
    return;
}