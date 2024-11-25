//Cálculo de Cuentas: Escribe una función que calcule el área de diferentes figuras geométricas (cuadrado, rectángulo y círculo) utilizando un ciclo for para repetir los cálculos.

#include <stdio.h>

void calcular() {
    int opcion;
    for (;;) {
        printf("1. Cuadrado. 2. Rectangulo. 3. Circulo. 4. Detener\n");
        scanf("%i", &opcion);

        if (opcion == 1) {
            int lado;
            printf("Lado: ");
            scanf("%i", &lado);
            printf("Area del Cuadrado: %i\n", lado * lado);
        } else if (opcion == 2) {
            int base, altura;
            printf("Base y Altura: ");
            scanf("%i %i", &base, &altura);
            printf("Area del Rectangulo: %i\n", base * altura);
        } else if (opcion == 3) {
            float radio;
            printf("Radio: ");
            scanf("%f", &radio);
            printf("Area del Circulo: %.2f\n", 3.1416 * radio * radio);
        } else if (opcion == 4) {
            break;
        } else {
            printf("Opcion invalida\n");
        }
    }
}

int main (){
	calcular();
	return 0;
}

