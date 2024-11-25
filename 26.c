//Tabla de Multiplicar: Escribe una función que imprima la tabla de multiplicar de un número utilizando un ciclo for.

#include <stdio.h>

void tabla(int numero) {
	int i;
	printf ("Ingrese un numero para mostrar la tabla: ");
	scanf ("%i", &numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}
int main (){
	int numero;
	tabla (numero);
	return 0;
}
