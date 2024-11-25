//Imprimir Números Pares: Crea una función que imprima todos los números pares entre 1 y N.

#include<stdio.h>

void pares(int n) {
	int i;
	printf ("Ingrese un numero: ");
	scanf ("%i", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%i ", i);
        }
    }
    printf("\n");
}

int main (){
	int n;
	pares (n);
	return 0;
}
