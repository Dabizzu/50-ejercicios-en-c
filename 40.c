//Cálculo de la Constante de Equilibrio: Crea una función que calcule la constante de equilibrio a partir de las concentraciones de reactivos y productos.

#include <stdio.h>

double calcular(double productos, double reactivos) {
    return productos / reactivos;
}

int main() {
    double productos, reactivos, keq;

    printf("Ingrese la concentracion de productos: ");
    scanf("%lf", &productos);
    printf("Ingrese la concentracion de reactivos: ");
    scanf("%lf", &reactivos);
    keq = calcular(productos, reactivos);
    printf("La constante de equilibrio es: %.2f\n", keq);
    return 0;
}



