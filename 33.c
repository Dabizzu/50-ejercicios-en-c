//C�lculo de Fuerza: Escribe una funci�n que calcule la fuerza (F = m * a) dados la masa y la aceleraci�n.

#include <stdio.h>

double calcular(double masa, double aceleracion) {
    return masa * aceleracion;
}

int main (){
	double masa, aceleracion, resultado;
	printf ("Ingrese la masa: ");
	scanf ("%lf", &masa);
	printf ("Ingrese la aceleracion: ");
	scanf ("%lf", &aceleracion);
	resultado = calcular(masa, aceleracion);
	printf ("El resultado es: %.2f", resultado);
	return 0;
}
