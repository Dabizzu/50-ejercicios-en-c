//Conversión de Temperatura: Crea una función que convierta temperaturas de Kelvin a Celsius y Fahrenheit.

#include<stdio.h>

void convertir(double kelvin) {
    double celsius = kelvin - 273.15;
    double fahrenheit = celsius * 9 / 5 + 32;
    printf("Celsius: %.2f\n", celsius);
    printf("Fahrenheit: %.2f\n", fahrenheit);
}

int main (){
	double kelvin;
	printf ("Ingrese los grados kelvin: ");
	scanf ("%lf", &kelvin);
	convertir(kelvin);
	return 0;
}
