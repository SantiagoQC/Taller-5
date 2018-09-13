/*
Programa:ejercicio 3
elaborado por: Santiago Quintero C.
fecha: 13/09/2018
*/
#include <iostream>
#include <stdio.h>

void numero_positivo();

void chao ();
int main()
{
	numero_positivo();
	chao ();
	
}
void numero_positivo()
{
	int num;
	printf ("\nDigite un numero entero positivo\n");
	scanf ("%d", &num);
	
	
	
		if (num>0){
			
			for(int i=1;i<=num;i++)
			printf ("\n%d\n",i);
		}
		else{
			printf("Error, el valor que ingreso no es el especificado reinicie y vuelva a intentar");
		}
	}

void chao()
{
	printf ("\nGRACIAS POR PARTICIPAR\n");
}
