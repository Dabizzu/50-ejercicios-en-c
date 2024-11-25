//Cálculo de la Ley de Beer-Lambert: Implementa una función que calcule la absorbancia de una solución (A = e * c * l).

#include <stdio.h>

double calcular(double absorcion, double concentracion, double longitud) {
    return absorcion * concentracion * longitud;
}

int main() {
    double absorcion, concentracion, longitud, absorbancia;
    printf("Ingrese el coeficiente de absorcion molar: ");
    scanf("%lf", &absorcion);
    printf("Ingrese la concentracion de la sustancia: ");
    scanf("%lf", &concentracion);
    printf("Ingrese la longitud: ");
    scanf("%lf", &longitud);
    absorbancia = calcular(absorcion, concentracion, longitud);
    printf("La absorbancia de la solucion es: %.2f", absorbancia);
    return 0;
}

