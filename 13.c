//Tabla de Multiplicar: Escribe una función que muestre la tabla de multiplicar de un número dado. El usuario puede decidir cuándo terminar el programa.

#include<stdio.h>

void tabla(int n) {
	char c;
	while (1){
	printf("Ingrese un numero para empezar la tabla de multiplicar: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
    printf ("Desea ver otra tabla? (S/N): ");
    scanf (" %c", &c);
    if (c == 'N' || c == 'n'){
    	return 1;
    }
    }
}

int main() {
    int n;
    tabla(n);
    return 0;
}

