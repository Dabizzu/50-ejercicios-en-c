//Cálculo de Raíces: Implementa una función que calcule las raíces de una ecuación cuadrática hasta que el discriminante sea negativo.

#include <stdio.h>
#include <math.h>

void calcularRaices(double a, double b, double c) {
    double discriminante = b * b - 4 * a * c;
    if (discriminante < 0) {
        printf("El discriminante es negativo, no hay raíces reales.\n");
    } else {
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Las raíces son: %.2f y %.2f\n", raiz1, raiz2);
    }
}

int main() {
    double a, b, c;
    while (1) {
        printf("Ingrese los coeficientes a, b y c para la ecuación cuadrática (0 para terminar): ");
        scanf("%lf %lf %lf", &a, &b, &c);
        if (a == 0) break;
        calcularRaices(a, b, c);
    }
    return 0;
}

