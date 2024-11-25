//Ley de los Gases Ideales: Escribe una función que calcule el volumen de un gas ideal utilizando la ecuación PV=nRT.

#include <stdio.h>

double calcular(double p, double n, double t, double r) {
    if (p <= 0) {
        printf("La presion debe ser mayor a 0.\n");
        return 0;
    }
    return (n * r * t) / p; 
}

int main() {
    double p, n, t, r = 0.0821, resultado;
    printf("Ingrese la presion: ");
    scanf("%lf", &p);
    printf("Ingrese la cantidad de sustancia: ");
    scanf("%lf", &n);
    printf("Ingrese la temperatura: ");
    scanf("%lf", &t);
    resultado = calcular(p, n, t, r);
    printf("El volumen del gas ideal es: %.2f", resultado);
    return 0;
}

