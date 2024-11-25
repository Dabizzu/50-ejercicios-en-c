//Conversión de Grados: Implementa una función que convierta temperaturas de Celsius a Fahrenheit y viceversa, dependiendo de la opción seleccionada.

//(0 °C × 9/5) + 32 = 32 F || (32 °F - 32) × 5/9
#include <stdio.h>

double convertir(double m){
	
	double c;
	
	if (m == 1){
		
		printf ("Ingrese los grados celsius:");
		scanf("%lf", &c);
		
		return (c * 9/5) + 32;
		
	} else if (m == 2){
		
		printf ("Ingrese los grados fahrenheit:");
		scanf("%lf", &c);
		
		return (c - 32) * 5/9;
		
	} else {
		
		printf("Metodo de conversion invalido");
		
		return 0;
	}
	
	
}

int main (){
	double m, resultado;
	
	printf ("Ingrese el metodo de conversion:\n1. Celsius a Fahrenheit\n2. Fahrenheit a Celsius\n");
	scanf("%lf",&m);
	
	resultado = convertir(m);
	
	printf ("El resultado es:%.2f", resultado);
	
	return 0;
}
