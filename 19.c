//Conteo de D�gitos: Escribe una funci�n que cuente cu�ntos d�gitos tiene un n�mero ingresado por el usuario, permitiendo ingresar hasta que se ingrese un n�mero negativo.

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

