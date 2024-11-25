//Suma de Digitos: Crea una función que sume los dígitos de un número dado.

#include <stdio.h>

int digitos(int numero) {
    int suma = 0;
    for (; numero != 0; numero /= 10) {
        suma += numero % 10; 
    }
    return suma; 
}

int main() {
    int numero;
    printf("Ingrese un numero: ");
    scanf("%i", &numero); 
    int resultado = digitos(numero); 
    printf("La suma de los digitos es: %i\n", resultado);
    return 0;
}



