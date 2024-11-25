//Cálculo de Densidad: Implementa una función que calcule la densidad (? = m / V) dados la masa y el volumen.

#include <stdio.h>
double calcular(double masa, double volumen) {
    if (volumen <= 0) {
        printf("El volumen debe ser mayor a 0\n");
        return 0;
    }
    return masa / volumen;
}

int main() {
    double masa, volumen, densidad;
    printf("Ingrese la masa: ");
    scanf("%lf", &masa);
    printf("Ingrese el volumen: ");
    scanf("%lf", &volumen);
    densidad = calcular(masa, volumen);
	printf("La densidad es: %.2f", densidad);
    return 0;
}



