//Conversión de Masa: Crea una función que convierta masa en kilogramos a gramos, miligramos y toneladas.

#include <stdio.h>

void convertir(double kilogramos) {
    if (kilogramos < 0) {
        printf("La masa no puede ser negativa\n");
        return;
    }

    double gramos = kilogramos * 1000;
    double miligramos = kilogramos * 1000000;
    double toneladas = kilogramos / 1000;
    printf("Masa en kilogramos: %.2f kg\n", kilogramos);
    printf("Equivalente en gramos: %.2f g\n", gramos);
    printf("Equivalente en miligramos: %.2f mg\n", miligramos);
    printf("Equivalente en toneladas: %.6f t\n", toneladas);
}

int main() {
    double kilogramos;
    printf("Ingrese la masa en kilogramos: ");
    scanf("%lf", &kilogramos);
    convertir(kilogramos);

    return 0;
}

