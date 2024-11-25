//Conteo de Dígitos: Escribe una función que cuente cuántos dígitos tiene un número ingresado por el usuario, permitiendo ingresar hasta que se ingrese un número negativo.

#include <stdio.h>

void contar() {
    while (1) {
    	int num, contador = 0;
        printf("Ingrese un numero (numero negativo para terminar): ");
        scanf("%i", &num);
        if (num < 0) break;
        
        while (num != 0) {
            contador++;
            num /= 10;
        }
        printf("Numero de digitos: %i\n", contador);
    }
}

int main() {
    contar();
    return 0;
}

