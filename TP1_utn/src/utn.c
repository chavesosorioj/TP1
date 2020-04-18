/*
 * ejerUtn.c
 *
 *  Created on: Apr 14, 2020
 *      Author: juliana
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utn.h"

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
 int retorno =-1;
 int bufferInt;
 	 while(reintentos>=0)
	 {
		 printf("%s",mensaje);
		 scanf("%d",&bufferInt);
		 __fpurge(stdin);
		 if(bufferInt >=0 || bufferInt<=9)
		 {

			 if(bufferInt >= minimo && bufferInt <= maximo)
			 {
				 *pResultado = bufferInt;
				 retorno=0;
				 break;
			 }
			 else
			 {
			 printf("%s", mensajeError);
			 reintentos--;
			 }
		 }
		 else
		 {
			 printf("\nLo ingresado no es un numero\n");
			 reintentos--;
		 }

	 }
 	return retorno;
}

int getInt(char mensaje[])
{
	int aux;
	printf("%s",mensaje);
	scanf("%d",&aux);
	return aux;
}

int esNumerico(char str[])
{	int i=0;
	while(str[i] != '\0')
	{
		if(str[i] <'9' || str[i] >'0')
			return 0;
		i++;
	}
	return 1;
}

