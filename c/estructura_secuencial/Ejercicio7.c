/*
	Realizar un programa que calcule el sueldo de un trabajador,
	el programa va a solicitar el numero de horas que ha trabajado en un mes,
	las horas se pagan a s/.18.	
*/
#include<stdio.h>

int main(){
	
	double sueldo = 0;
	int horas = 0;
	
	//GUARDANDO HORA
	printf("Digite las horas trabajadas: ");
	scanf("%i",&horas);
	
	//CALCULANDO SUELDO
	sueldo = horas*18;
	
	//MOSTRANDO RESULTADO
	printf("El sueldo del trabajador es S/.%.2f",sueldo);
	
	return 0;
}
