//Conversión de Unidades: Crea una función que convierta metros a kilómetros, deteniéndose cuando se ingresa un valor de cero.

#include <stdio.h>

void convertir() {
    float metros;
    while (1) {
        printf("Ingrese los metros: ");
        scanf("%f", &metros);
        if (metros == 0) {
            break;
        }
        printf("%.2f metros son %.2f kilometros.\n", metros, metros / 1000);
    }
}

int main() {
    convertir();
    return 0;
}

