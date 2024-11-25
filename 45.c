//Cálculo de Concentración: Escribe una función que calcule la concentración (C = n / V) a partir de moles y volumen.

#include <stdio.h>

double calcular(double moles, double volumen) {
    if (volumen <= 0) {
        printf("El volumen debe ser mayor a 0");
        return 0;
    }
    return moles / volumen;
}

int main() {
    double moles, volumen, concentracion;
    printf("Ingrese los moles de la sustancia: ");
    scanf("%lf", &moles);
    printf("Ingrese el volumen de la solucion: ");
    scanf("%lf", &volumen);
    concentracion = calcular(moles, volumen);
	printf("La concentracion es: %.2f", concentracion);
    return 0;
}

