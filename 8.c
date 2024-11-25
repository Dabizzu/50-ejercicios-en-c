//Cálculo de Hipotenusa: Crea una función que reciba los catetos de un triángulo rectángulo y calcule la hipotenusa. Si alguno de los catetos es negativo, debe devolver un error.
#include <stdio.h>
#include <math.h>

void calcularHipotenusa(double a, double b) {
	double resultado;
	printf("Ingrese el primer cateto: ");
    scanf("%lf", &a);
    printf("Ingrese el segundo cateto: ");
    scanf("%lf", &b);
    if (a < 0 || b < 0) {
        printf("Error: los catetos no pueden ser negativos.\n");
        return 1;
    }
	resultado = sqrt(a * a + b * b);
	printf("La hipotenusa es %.2lf\n", resultado);
}

int main() {
    double a, b;
	calcularHipotenusa(a, b);
    return 0;
}

