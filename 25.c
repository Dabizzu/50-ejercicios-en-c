//Suma de Digitos: Crea una funci�n que sume los d�gitos de un n�mero dado.

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



