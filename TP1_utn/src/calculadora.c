/*
 * calculadora.c
 *
 *  Created on: Apr 17, 2020
 *      Author: juliana
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "calculadora.h"


int sumaEnteros(int num1, int num2, int *resultado)
{
	*resultado= num1+num2;
	return 0;
}

int restaEnteros(int num1, int num2, int *resultado)
{
	*resultado=num1-num2;
	return 0;
}

int multiplicacionEnteros(int num1, int num2, int *resultado)
{
	*resultado=num1*num2;
	return 0;
}

int divisionNum(int num1, int num2, float *resultado, char *error)
{
	if(num2==0)
	{
		printf("%s",error);
	}
	else
	{
		*resultado=num1/num2;
	}
return 0;
}

int factorialNum(int num, int *resultado)
{
    int i;
    int retorno = 0;
    long int buffer;
    buffer = num;
    num--;
    if (num<0)
    {
        retorno = -1;
    }else if (num == 0)
        {
            buffer = 1;
        }else
            {
                for (i=1;i<num;num--)
                {
                    buffer *= num;
                }
            }
    *resultado = buffer;
    return retorno;
}

int imprimirResultados(int suma, int resta, float division,int multiplicacion, long int factorialX, long int factorialY)
{
		printf("\nEl resultado de A+B es: %d\n",suma);
		printf("\nEl resultado de A-B es:%d\n",resta);
		printf("\nEl resultado de A*B es: %d\n",multiplicacion);
		printf("\nEl resultado de A/B es: %.2f\n",division);
		printf("\nEl factorial de A es %ld y el factorial de B es %ld\n", factorialX,factorialY);

		return 0;
}

