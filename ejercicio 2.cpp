/*
Programa:Ejercicio 2
elaborado por: Santiago Quintero C.
fecha: 13/09/2018
*/
#include <iostream>
#include <stdio.h>
void mult();
int main()
{	
	mult();
}

void mult()
{
	float num1,num2,mult;
	
	printf("\n  Digite un numero\n");
	scanf ("%f", &num1);
	printf ("\n Digite otro numero\n");
	scanf ("%f", &num2);
	
	mult = (num1*num2);
	
	printf ("\n El resultado es : %2.f\n", mult);
}



