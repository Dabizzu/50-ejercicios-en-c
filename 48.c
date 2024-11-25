//Cálculo de Potencia: Escribe una función que calcule la potencia (P = W / t) dados el trabajo y el tiempo.

#include <stdio.h>

double calcular(double trabajo, double tiempo) {
    if (tiempo <= 0) {
        printf("El tiempo debe ser mayor que 0");
        return 0;
    }
    return trabajo / tiempo;
}

int main() {
    double trabajo, tiempo, potencia;
    printf("Ingrese el trabajo realizado en julios: ");
    scanf("%lf", &trabajo);
    printf("Ingrese el tiempo en segundos: ");
    scanf("%lf", &tiempo);
    potencia = calcular(trabajo, tiempo);
    printf("La potencia es: %.2f", potencia);
    return 0;
}

