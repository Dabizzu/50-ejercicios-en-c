// Cálculo de Sumas: Crea una función que sume números ingresados por el usuario hasta que se ingrese un número negativo.

void calculo(int a, int b){
	int resultado;
	while(1){
	printf ("Ingrese el primer numero que desea sumar: ");
	scanf ("%i", &a);
	printf ("Ingrese el segundo numero que desea sumar: ");
	scanf ("%i", &b);
	if (a < 0 || b < 0){
		return 1;
	}
	resultado = a + b;
	printf ("El resultado es: %i\n", resultado);	}
}

int main (){
	int a, b;
	calculo(a,b);
	return 0;
}
