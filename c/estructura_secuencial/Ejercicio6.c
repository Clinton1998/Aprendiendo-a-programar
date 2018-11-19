/*
	Programa que lea la longitud de los catetos de un triangulo rectángulo
	y calcule la longitud de la hipotenusa.
*/
#include<stdio.h>
#include<math.h>

int main(){
	
	float ca,co,hipotenusa;
	//Inicializo las variables en 0
	ca = co = hipotenusa = 0;
	
	//GUARDANDO VALORES
	printf("Ingrese el cateto opuesto: ");
	scanf("%f",&co);
	printf("Ingrese el cateto adyacente: ");
	scanf("%f",&ca);
	
	//CALCULANDO LA HIPOTENUSA
	hipotenusa = sqrt(pow(ca,2)+pow(co,2));
	
	//MOSTRANDO RESULTADO
	printf("La hipotenusa es %.2f",hipotenusa);
	
	return 0;
}
