//Cálculo de Potencias: Implementa una función que calcule la potencia de un número N elevado a la M utilizando un ciclo for.
#include<stdio.h>
int potencia(int base, int exponente) {
	printf ("Ingrese una base: ");
	scanf ("%i", &base);
	printf ("Ingrese un exponente: ");
	scanf ("%i", &exponente);
    int resultado = 1, i;
    for (i = 1; i <= exponente; i++) {
        resultado *= base;
    }
    printf ("El resultado es: %i\n", resultado);
    return potencia(base, exponente);
}

int main (){
	int base, exponente;
	potencia(base, exponente);
	return 0;
}
