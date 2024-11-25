//Clasificación de Números: Crea una función que reciba un número y verifique si es positivo, negativo o cero.

void clasificacion(int n){
	printf ("Ingrese un numero: ");
	scanf ("%i", &n);
	if (n > 0){
		printf ("Es un numero positivo");
	} else if (n < 0){
		printf ("Es un numero negativo");
	} else {
		printf ("El numero es cero");
	}
	
}

int main (){
	int n;
	clasificacion(n);
	return 0;
}
