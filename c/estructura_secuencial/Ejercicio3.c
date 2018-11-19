/*
	App en C que lea un nombre y muestre por pantalla: "Buenos dias mas el nombre introducido"
*/
#include<stdio.h>

int main(){

	char nombre[30];
	
	//GUARDANDO NOMBRE
	printf("Ingrese su nombre: ");
	gets(nombre);
	
	//MOSTRANDO RESULTADO
	printf("Buenos dias %s",nombre);
	
	return 0;
}

