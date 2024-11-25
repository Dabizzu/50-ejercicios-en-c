//Suma de Números Impares: Implementa una función que sume todos los números impares entre 1 y N.

#include <stdio.h>
int impares(int n) {
    int suma = 0, i;
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            suma += i;
        }
    }
    return suma;
}

int main (){
	int n, resultado;
	printf ("Ingrese un numero: ");
	scanf ("%i", &n);
	resultado = impares(n);
	printf ("El resultado es: %i", resultado);
	return 0;
}
