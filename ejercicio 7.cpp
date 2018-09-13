/*
Programa:ejercicio 7
elaborado por: Santiago Quintero C.
fecha: 13/09/2018
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
void inicio();
void arreglo();
void chao();
int main()
{
	inicio();
	arreglo();
	chao();
}
void inicio()
{
	
}
void arreglo()
{
	int num1[2],num2[2],i;
	
	for(i=0;i<2;i++){
		printf("\n digite un numero\n");
		scanf ("%d",&num1[i]);
	}
	for(i=0;i<2;i++){
		num2[i]*num1[i];
	}
	for (i=0;i<2;i++){
		printf("\n%d\n",num2[i]);
	}
}
void chao()
{
	printf("\n GRACIAS POR PARTICIPAR \n");
}
