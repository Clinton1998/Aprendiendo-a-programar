/*
	Una institucion educativa ha recibido una donacion especial que
	ser� repartida  entre las carreras, de la siguiente manera:
		*Marketing: 20% de Informatica
		*Informatica: 15% de Administraci�n
		*Administraci�n: 30% de la donacion
		*Contabilidad: lo que resta de la donaci�n
	
	Realizar una aplicaci�n que me deternine cuanto recibir� cada
	carrera. Sabiendo que el monto de la donaci�n ser� ingresado 
	por teclado.
*/
#include<stdio.h>

int main(){
	double donacion = 0;
	double mar,inf,adm,cont;
	
	//GUARDANDO LA DONACION
	printf("Ingrese el monto de la donacion: ");
	scanf("%lf",&donacion);
	
	//REPARTIENDO LA DONACION
	adm = 0.3*donacion;
	inf = 0.15*adm;
	mar = 0.2*inf;
	cont = donacion-(adm+inf+mar);
	//MOSTRANDO RESULTADO
	printf("El monto de las carreras son:\n");
	printf("Marketing: %.2f\n",mar);
	printf("Informatica: %.2f\n",inf);
	printf("Administracion: %.2f\n",adm);
	printf("Contabilidad: %.2f\n",cont);
	
	return 0;
}

