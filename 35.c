//C�lculo de Presi�n: Implementa una funci�n que calcule la presi�n (P = F / A) dados la fuerza y el �rea.

#include <stdio.h>

double calcular(double fuerza, double area) {
    if (area <= 0) {
        printf("El �rea debe ser mayor a 0.\n");
        return 0;
    }
    return fuerza / area;
}

int main (){
	double fuerza, area, resultado;
	printf ("Ingrese la fuerza: ");
	scanf ("%lf", &fuerza);
	printf ("Ingrese el area: ");
	scanf ("%lf", &area);
	resultado = calcular(fuerza, area);
	printf("El resultado es: %.2f", resultado);
	return 0;
}
