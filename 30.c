//C�lculo de M�dulo: Implementa una funci�n que calcule el m�dulo de un n�mero A respecto a B utilizando un ciclo for.

#include <stdio.h>

int calcular(int a, int b) {
    int modulo = a;
    for (; modulo >= b; modulo -= b);
    return modulo;
}

int main() {
    int a, b, resultado;
    printf("Ingrese el numero A: ");
    scanf("%i", &a); 
    printf("Ingrese el numero B: ");
    scanf("%i", &b); 
    resultado = calcular(a, b);
    printf("El resultado es: %i\n", resultado); 
    return 0;
}

