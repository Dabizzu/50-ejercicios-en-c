//Clasificaci�n de N�meros Enteros: Implementa una funci�n que reciba un n�mero y determine si es par o impar.

void clasificacion(int n){
	printf ("Ingrese un numero: ");
	scanf ("%i", &n);
	
	if (n%2==0){
		printf ("El numero es par");
	} else {
		printf ("El numero es impar");
	}
}

int main (){
	int n;
	clasificacion (n);
	return 0;
}
