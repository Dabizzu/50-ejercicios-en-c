//Cálculo de Potencias: Escribe una función que reciba dos números y calcule la potencia del primero elevado al segundo, mostrando un mensaje de error si el exponente es negativo.

#include <stdio.h>
#include <math.h>

void potencia(double base, int exponente) {
	double resultado;
	printf("Ingrese la base: ");
    scanf("%lf", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    if (exponente < 0) {
        printf("Error: el exponente es negativo.\n");
        return -1;
    }
    resultado = pow(base, exponente);
    printf("El resultado es %.2f\n", resultado);
}

int main() {
    double base;
    int exponente;
	potencia(base, exponente);
    return 0;
}

