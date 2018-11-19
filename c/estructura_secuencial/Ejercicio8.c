/*
	Realizar un App en C que me permita ingresar el precio de compra
	unitario de un producto y la cantidad de este,calcular y mostrar
	el precio parcial, el monto de IGV(18%) del precio parcial y el
	precio neto a pagar.
*/
#include<stdio.h>

int main(){
	
	float precio_unitario = 0;
	int cantidad = 0;
	double parcial,igv,precio_neto;
	
	//GUARDANDO DATOS
	printf("Ingrese el precio unitario: ");
	scanf("%f",&precio_unitario);
	printf("Ingrese la cantidad: ");
	scanf("%i",&cantidad);
	
	//CALCULANDO PRECIOS
	parcial = precio_unitario*cantidad;
	igv = 0.18*parcial;
	precio_neto = parcial+igv;
	
	//MOSTRANDO RESULTADO
	printf("El precio parcial es %.2f\n",parcial);
	printf("El monto de IGV es %.2f\n",igv);
	printf("El precio total a pagar es %.2f\n",precio_neto);
	
	return 0;
}

