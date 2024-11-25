//C�lculo de Factorial: Escribe una funci�n que calcule el factorial de un n�mero. Si el n�mero es negativo, debe devolver un mensaje de error.

#include <stdio.h>

void factorial(int n) {
	int i;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error: el numero es negativo.\n");
        return 1;
    }
    int resultado = 1;
    for (i = 1; i <= n; i++) {
        resultado *= i;
    }
    printf ("El factorial es: %i", resultado);
}

int main() {
	int n;
    factorial(n);
    return 0;
}

