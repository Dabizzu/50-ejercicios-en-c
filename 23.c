//Cálculo de Factoriales: Escribe una función que calcule el factorial de N utilizando un ciclo for.

int factorial(int n) {
	printf ("Ingrese un numero: ");
	scanf ("%i", &n);
    int resultado = 1, i;
    for (i = 1; i <= n; i++) {
        resultado *= i;
    }
    printf ("El factorial es: %i\n", resultado);
    return factorial(n);
}

int main (){
	int n;
	factorial (n);
	return 0;
}
