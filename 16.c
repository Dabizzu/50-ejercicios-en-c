//Conteo de Vocales: Escribe una función que cuente las vocales en una cadena de texto ingresada por el usuario. La entrada debe finalizar con un punto.
#include <stdio.h>

void contar() {
    char texto;
    int vocales = 0;
    
    printf("Ingrese texto (finalice con un punto): ");
    while (1) {
        texto = getchar();
        if (texto == '.') break; 
        texto = tolower(texto); 
        if (texto == 'a' || texto == 'e' || texto == 'i' || texto == 'o' || texto == 'u') {
            vocales++; 
        }
    }
    printf("Numero de vocales: %i\n", vocales);
}

int main() {
    contar();
    return 0;
}


