//C�lculo de Series: Crea una funci�n que calcule la suma de una serie de n�meros hasta que se introduzca un valor espec�fico (por ejemplo, 100).

#include <stdio.h>

void calcular() {
    int suma = 0, num;
    while (1) {
        printf("Ingrese un numero para sumar a la serie (100 para terminar): ");
        scanf("%i", &num);
        if (num == 100) break;
        suma += num;
    }
    printf("La suma de la serie es: %i\n", suma);
}

int main() {
    calcular();
    return 0;
}

