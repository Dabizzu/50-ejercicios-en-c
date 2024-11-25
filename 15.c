//Cálculo de Números de Fibonacci: Implementa una función que genere la serie de Fibonacci hasta que el número ingresado por el usuario sea menor o igual a cero.

#include <stdio.h>

void calculo() {
    while (1) {
    	 int n, n1 = 0, n2 = 1, n3, contador = 1;
        printf("Cuantos terminos deseas ver?: ");
    	scanf("%i", &n3);
        if (n3 <= 0) {
            break;
        }
        while (contador <= n3){
        printf("%i ", n1);
        n = n1 + n2;
        n1 = n2;
        n2 = n;
        contador++;
        }
        printf ("\n");
    }
}

int main() {
    calculo();
    return 0;
}



