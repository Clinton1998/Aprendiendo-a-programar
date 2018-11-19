/*
	App en C que lea por teclado el valor del radio de una circunferencia, calcular
	y mostrar por pantalla la longitud y el área de la circunferencia.
*/
#include<stdio.h>

int main(){
	
	int radio = 0;
	//Variables para guaradar la longitud y area respectivamente
	double lc,ac;
	
	//GUARDANDO LA RADIO
	printf("Digite la radio de la circunferencia: ");
	scanf("%i",&radio);
	//CALCULANDO LONGITUD Y AREA
	lc = 2*(3.1416)*radio;
	ac = (3.1416)*pow(radio,2);
	
	printf("La longitud de la circuferencia es %.2f\n",lc);
	printf("El area de la circunferencia es %.2f\n",ac);
	
	return 0;
}
