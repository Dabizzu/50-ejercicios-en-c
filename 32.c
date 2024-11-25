//Cálculo de Velocidad Media: Implementa una función que calcule la velocidad media a partir de distancia y tiempo ingresados por el usuario.

#include <stdio.h>

double calcular(double distancia, double tiempo) {
    if (tiempo <= 0) {
        printf("El tiempo debe ser mayor a 0.\n");
        return 0;
    }
    return distancia / tiempo;
}

int main (){
	double distancia, tiempo, resultado;
	printf ("Ingrese la distacia: ");
	scanf ("%lf", &distancia);
	printf ("Ingrese el tiempo: ");
	scanf ("%lf", &tiempo);
	resultado = calcular(distancia, tiempo);
	printf ("El resultado es: %.2f", resultado);
	return 0; 
}
