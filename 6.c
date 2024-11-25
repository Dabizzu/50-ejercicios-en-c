//Determinación de Edad: Implementa una función que reciba el año de nacimiento y devuelva la edad. Si la edad es menor de 18, debe indicar que es menor de edad.

void determinacion (int n, int edad){
	printf ("Ingrese su año de nacimiento: ");
	scanf ("%i", &n);
	edad = 2024 - n;
	if(edad >= 18){
		printf ("Tiene %i. Es mayor de edad", edad); 
	} else {
		printf ("Tiene %i. Es menor de edad", edad);
	}
}


int main (){
	int n, edad;
	determinacion (n, edad);
	return 0;
}
