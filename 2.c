//Clasificación de Triángulos: Crea una función que reciba tres lados de un triángulo y determine si es equilátero, isósceles o escaleno.

#include <stdio.h>

void triangulo(int a, int b, int c){
	
		if (a == b && b == c){
		
		printf ("\nEl triangulo es equilatero");
		
	}else if (a == b|| a == c || b == c){
		
		printf ("\nEl triangulo es isoceles");
		
	} else {
		
		printf ("\nEl triangulo es escaleno");
		
	}
	
}

int main (){
	
	int a, b, c;
	
	printf ("Ingrese la medida del primer lado del triangulo:");
	scanf ("%i", &a);
	
	printf ("\nIngrese la medida del segundo lado del triangulo:");
	scanf ("%i", &b);
	
	printf ("\nIngrese la medida del tercer lado del triangulo:");
	scanf ("%i", &c);
	
    triangulo(a, b, c);
	
	return 0;
}
