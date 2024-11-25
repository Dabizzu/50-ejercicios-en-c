//Contador de Caracteres: Crea una función que cuente el número de caracteres en una cadena de texto dada.

#include <stdio.h>

int contar(char texto[]) {
    int contador = 0, i;
    for (i = 0; texto[i] != '\0'; i++) {
        contador++;
    }
    return contador;
}

int main (){
	int resultado;
	char texto[100];
	printf ("Ingrese el texto: ");
	fgets(texto, sizeof(texto), stdin);
	resultado = contar(texto);
	printf ("El numero de carateres es: %i", resultado - 1);
	return 0;
}

