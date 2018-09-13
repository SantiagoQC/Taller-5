/*
Programa:Vocales
elaborado por: Santiago Quintero C.
fecha: 13/09/2018
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>

void vocal();
int main()
{
	vocal();
	chao();
}
void vocal()
{
	char letra;
	printf("digite una letra");
	scanf("%c",&letra);
	
	if(letra=='a' && letra=='e' && letra=='i'  && letra=='o' && letra=='u'&& letra=='A' && letra=='E' && letra=='I'  && letra=='O' && letra=='U')
	{
		printf("\nEs una vocal");
	}else {
	    printf("\nno es una vocal");
	}
	
		
}
