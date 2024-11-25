//Cálculo de Trabajo: Escribe una función que calcule el trabajo realizado (W = F * d) dados la fuerza y la distancia.

#include <stdio.h>

double calcular(double fuerza, double distancia) {
    if (distancia < 0) {
        printf("La distancia no puede ser negativa.\n");
        return 0;
    }
    return fuerza * distancia;
}
int main() {
    double fuerza, distancia, resultado;
    printf("Ingrese la fuerza: ");
    scanf("%lf", &fuerza);
    printf("Ingrese la distancia: ");
    scanf("%lf", &distancia);
    resultado = calcular(fuerza, distancia);
    printf("El trabajo realizado es: %.2f", resultado);
    return 0;
}

