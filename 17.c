//Cálculo de Factoriales: Crea una función que calcule el factorial de un número, permitiendo al usuario ingresar números de forma continua hasta que decida detenerse.

#include <stdio.h>

void factorial(int n) {
	while (1) {
    printf("Ingrese un numero para calcular su factorial (Ingrese un numero negativo para detenerse): ");
    scanf("%i", &n);
    if (n < 0) {
    break;}
    int resultado = 1;
    if (n < 0) {
        printf("El número no puede ser negativo.\n");
        return -1;
    }
    while (n > 1) {
        resultado *= n;
        n--;
    }
	printf("El factorial es %i.\n", resultado);
    }
}

int main() {
    int n;
	factorial(n);
    return 0;
}

