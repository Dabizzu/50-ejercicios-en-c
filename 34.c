//Cálculo de Energía Potencial: Crea una función que calcule la energía potencial (E_p = m * g * h) dados la masa, la altura y la gravedad.

#include <stdio.h>

double calcular(double masa, double altura, double gravedad) {
    return masa * gravedad * altura;
}

int main (){
	double masa, altura, gravedad, resultado;
	printf ("Ingrese la masa: ");
	scanf ("%lf", &masa);
	printf ("Ingrese la altura: ");
	scanf ("%lf", &altura);
	printf ("Ingrese la gravedad: ");
	scanf ("%lf", &gravedad);
	resultado = calcular(masa, altura, gravedad);
	printf ("El resultado es: %.2f", resultado);
	return 0;
}
