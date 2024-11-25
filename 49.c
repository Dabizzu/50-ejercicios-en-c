//Cálculo de Calor Específico: Crea una función que calcule el calor necesario para cambiar la temperatura de una sustancia (Q = m * c * ?T).

#include <stdio.h>

double calcular(double masa, double calor_especifico, double deltaT) {
    return masa * calor_especifico * deltaT;
}

int main() {
    double masa, calor_especifico, deltaT, calor;
    printf("Ingrese la masa de la sustancia: ");
    scanf("%lf", &masa);
    printf("Ingrese el calor especifico de la sustancia: ");
    scanf("%lf", &calor_especifico);
    printf("Ingrese el cambio de temperatura: ");
    scanf("%lf", &deltaT);
    calor = calcular(masa, calor_especifico, deltaT);
    printf("El calor necesario es: %.2f julios", calor);
    return 0;
}

