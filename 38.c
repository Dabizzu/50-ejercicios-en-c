//Cálculo de la Masa Molar: Implementa una función que calcule la masa molar de un compuesto dado su fórmula.

#include <stdio.h>

double calcular(double masa, double moles) {
    if (moles <= 0) {
        printf("El numero de moles debe ser mayor a 0.\n");
        return 0;
    }
    return masa / moles;
}

int main (){
	double masa, moles, resultado;
	printf ("Ingrese la masa: ");
	scanf ("%lf", &masa);
	printf ("Ingrese el numero de moles: ");
	scanf ("%lf", &moles);
	resultado = calcular(masa, moles);
	printf ("El resultado es: %.2f", resultado);
	return 0;
}
