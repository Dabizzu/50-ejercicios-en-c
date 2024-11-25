//Cálculo de pH: Escribe una función que determine el pH a partir de la concentración de iones de hidrógeno.

#include <stdio.h>

double calcular(double concentracion) {
    if (concentracion <= 0) {
        printf("La concentración debe ser mayor a 0.\n");
        return 0;
    }
    return -log10(concentracion);
}

int main (){
	double concentracion, resultado;
	printf ("Ingrese la concentracion: ");
	scanf ("%lf", &concentracion);
	resultado = calcular(concentracion);
	printf ("El resultado es: %.2f", resultado);
	return 0;
}
