//C�lculo de Sumas: Implementa una funci�n que sume los primeros N n�meros enteros positivos.
#include <stdio.h>

void numeros() {
    int suma = 0, i, n;

    printf("Ingrese los primeros N numeros que desea sumar: ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++) {
        suma += i;
    }

    printf("La suma es: %i\n", suma);
}

int main() {
    numeros();
    return 0;
}

