//Conversi�n de Energ�a: Implementa una funci�n que convierta energ�a de joules a calor�as.

#include <stdio.h>
double convertir(double joules) {
    return joules / 4.184;
}

int main() {
    double joules, calorias;
    printf("Ingrese la cantidad de energia en joules: ");
    scanf("%lf", &joules);
    calorias = convertir(joules);
    printf("%.2f joules equivale a %.2f calorias", joules, calorias);
    return 0;
}

