/*	Leer un número entero por teclado y obtener y mostrar
	por pantalla el doble y el triple de ese número. */
	
#include<stdio.h>

int main(){
	
		int numero = 0;
		//variables para guardar el doble y el triple
		int d,t;
		
		//CAPTURANDO EL ENTERO
		printf("Ingrese un numero: ");
		scanf("%i",&numero);
		
		//HACIENDO OPERACIONES ARITMETICAS
		d = numero*2;
		t = numero*3;
		
		//MOSTRANDO RESULTADO
		printf("El doble de %i es %i\n",numero,d);
		printf("El triple de %i es %i\n",numero,t);
	
		return 0;
}
