/*
	Lea una cantidad de grados centígrados y lo convierta e grados Fahrenheit.
	La formula correspondiente es: f = 32 + (9*c/5)
*/
#include<stdio.h>

int main(){
	
	int c = 0;
	int f = 0;
	
	//GUARDANDO CENTIGRADOS
	printf("Ingrese los grados centigrados: ");
	scanf("%i",&c);
	
	//HACIENDO LA CONVERSION
	f = 32+(9*c/5);
	
	//MOSTRANDO RESULTADO
	printf("Los grados %i en Fahrenheit son %i",c,f);
	
	return 0;
}
