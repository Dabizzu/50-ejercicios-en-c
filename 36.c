//C�lculo de pH: Escribe una funci�n que determine el pH a partir de la concentraci�n de iones de hidr�geno.

#include <stdio.h>

double calcular(double concentracion) {
    if (concentracion <= 0) {
        printf("La concentraci�n debe ser mayor a 0.\n");
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
