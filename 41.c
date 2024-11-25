//Suma de Vectores: Implementa una función que sume dos vectores en un espacio tridimensional.

#include <stdio.h>

void suma(double v1[3], double v2[3], double resultado[3]) {
	int i;
    for (i = 0; i < 3; i++) {
        resultado[i] = v1[i] + v2[i];
    }
}

int main() {
    double v1[3], v2[3], resultado[3];
    int i;
    printf("Ingrese las componentes del primer vector (x, y, z): ");
    for (i = 0; i < 3; i++) {
        scanf("%lf", &v1[i]);
    }
    printf("Ingrese las componentes del segundo vector (x, y, z): ");
    for (i = 0; i < 3; i++) {
        scanf("%lf", &v2[i]);
    }
    suma(v1, v2, resultado);
    printf("Resultado de la suma: (%.2f, %.2f, %.2f)\n", resultado[0], resultado[1], resultado[2]);

    return 0;
}

