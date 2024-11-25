//C�lculo de Promedio: Implementa una funci�n que calcule el promedio de una serie de n�meros ingresados por el usuario, deteni�ndose cuando se introduce un cero.

#include <stdio.h>

int calculo(){
	int n, suma=0;
	while(1){
		printf ("Ingrese un numero: ");
		scanf ("%i", &n);
		if (n == 0){
		break;}
		suma += n;
	}
	return suma;
}

int main (){
    int suma, promedio;
    
    suma = calculo();

    if (suma != 0) {  
        promedio = suma / 2;
        printf("El promedio es: %i\n", promedio);
    } else {
        printf("No se ingresaron n�meros.\n");
    }
	return 0;
}
