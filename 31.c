//Conversi�n de Unidades de Longitud: Crea una funci�n que convierta metros a cent�metros, mil�metros y kil�metros.

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
