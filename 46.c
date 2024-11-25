//Ley de Hooke: Crea una función que calcule la fuerza de un resorte (F = -k * x) dados la constante del resorte y la deformación.

#include <stdio.h>

double calcular(double k, double x) {
    return -k * x;
}

int main() {
    double constante, deformacion, fuerza;
    printf("Ingrese la constante del resorte k: ");
    scanf("%lf", &constante);
    printf("Ingrese la deformación del resorte x: ");
    scanf("%lf", &deformacion);
    fuerza = calcular(constante, deformacion);
    printf("La fuerza del resorte es: %.2f", fuerza);
    return 0;
}

