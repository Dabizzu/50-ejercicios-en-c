//Conversión de Unidades de Longitud: Crea una función que convierta metros a centímetros, milímetros y kilómetros.

#include<stdio.h>

void convertir(double metros) {
    printf("Centimetros: %.2f\n", metros * 100);
    printf("Milimetros: %.2f\n", metros * 1000);
    printf("Kilometros: %.4f\n", metros / 1000);
}

int main (){
	double metros;
	printf ("Ingrese los metros: ");
	scanf ("%lf", &metros);
	convertir (metros);
	return 0;
}
