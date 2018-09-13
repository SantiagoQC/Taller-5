/*
Programa:ejercicio 8
elaborado por: Santiago Quintero C.
fecha: 13/09/2018
*/

#include<stdio.h>

#include<conio.h>



const int max = 1000;

int i,j,aux,cn,n[max];
void presentacion()
{
	
	printf("programa:ordenmientos de datos numericos\nfecha:11/09/2018\ncreador:Luis Felipe Henao\n");
	
	
	
	
}



void ordenamiento()
	
{
	
	scanf("%d",&cn);
	
	
	printf("Ingrese los elementos\n ");
	for(i=0;i<cn;i++)
		
	{
		
		scanf("%d",&n[i]);
		
	}
	
	
	
	for(i=1; i<cn; i++)
		
	{
		
		for(j=0; j<cn-i; j++)
			
		{
			
			if(n[j]<n[j+1])
				
			{
				
				aux    = n[j+1];
				
				n[j+1] = n[j];
				
				n[j]   = aux;
				
			}
			
		}
		
	}
	
	
	
	for(i=0;i<cn;i++)
		
	{
		
		printf("\n%d",n[i]);
		
	}
	
	
	
}
void mensaje()
{
	printf("Dimension del Vector: ");
	
}
int main()
{
	presentacion();
	mensaje();
	ordenamiento();
	return 0;
	
}
