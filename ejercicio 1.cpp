/*
Programa:ejercicio 1
elaborado por: Santiago Quintero C.
fecha: 13/09/2018
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>

void numero_mayor();
int main()
{
	numero_mayor();
}
void numero_mayor()
{
	int v1, v2, v3,may=-99999;
	printf ("\ndigite un numero\n");
	scanf ("%d", &v1);
	printf ("\ndigite otro numero\n");
	scanf ("%d", &v2);
	printf ("\ndigite otro numero\n");
	scanf ("%d", &v3);

	if ( v1 > v2 ){
		may=v1;
	}
	else{
		may=v2;
	}
	if ( v3 > may ) {
		may=v3;
                 }
	printf("El numero mayor es: %d", may);
}
