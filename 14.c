//Conversi�n de Unidades: Crea una funci�n que convierta metros a kil�metros, deteni�ndose cuando se ingresa un valor de cero.

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

