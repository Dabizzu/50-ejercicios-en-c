//Verificación de Primalidad: Escribe una función que determine si un número es primo o no.

#include <stdio.h>

int numeroprimo (int n){
	
	int contador = 0;
	int i;
	printf ("Ingrese un numero:");
	scanf ("%i", &n);
	
	for (i = n; i > 0; i--){
		if(n%i==0){
			contador++;
		}
	}
if(contador == 2){
	printf ("El numero es primo\n");
} else {
	printf ("EL numero no es primo\n");
}
return numeroprimo (n);
}

int main (){
	int n;
	
	numeroprimo (n);
	
	return 0;
}
