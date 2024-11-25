//Conversión de Energía: Implementa una función que convierta energía de joules a calorías.

#include <stdio.h>
double convertir(double joules) {
    return joules / 4.184;
}

int main() {
    double joules, calorias;
    printf("Ingrese la cantidad de energia en joules: ");
    scanf("%lf", &joules);
    calorias = convertir(joules);
    printf("%.2f joules equivale a %.2f calorias", joules, calorias);
    return 0;
}

