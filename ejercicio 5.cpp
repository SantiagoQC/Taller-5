/*
Programa:Total segundos
elaborado por: Santiago Quintero C.
fecha: 13/09/2018
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>

void tiempo();
void tiempo(){
	int segtotal,hor,min,seg;
	
	printf("digite el numero total de segundos: ");
	scanf ("%d",&segtotal);	
	hor=segtotal/3600;
	min=segtotal/60;
	seg=segtotal/1;
	printf(" horas: %d\n",hor);
	
	printf(" minutos: %d\n",min);
	
	printf (" segundos: %d\n",seg);
	
	
}
int main(){
	tiempo();
	return 0;
}

