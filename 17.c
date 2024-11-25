//C�lculo de Factoriales: Crea una funci�n que calcule el factorial de un n�mero, permitiendo al usuario ingresar n�meros de forma continua hasta que decida detenerse.

#include <stdio.h>

void factorial(int n) {
	while (1) {
    printf("Ingrese un numero para calcular su factorial (Ingrese un numero negativo para detenerse): ");
    scanf("%i", &n);
    if (n < 0) {
    break;}
    int resultado = 1;
    if (n < 0) {
        printf("El n�mero no puede ser negativo.\n");
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

