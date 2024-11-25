//Cálculo de Raíz Cuadrada: Escribe una función que reciba un número y retorne su raíz cuadrada. Si el número es negativo, debe devolver un mensaje de error.

#include <stdio.h>
#include <math.h>

int main (){
	double num, raiz;
	
	printf ("Ingrese un numero:");
	scanf ("%lf", &num);
	
	if (num < 0){
		
		printf ("Error");
		
	} else {
		
		raiz = sqrt (num);
		
		printf ("La raiz cuadrada de %.f es: %.2f", num, raiz);
		
	}
	
	
	
	return 0;
}
