/*
 ============================================================================
 Name        : TP1_utn.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include "utn.h"
#include "calculadora.h"

int main() {
	//setbuf(stdout,NULL);

	int x;
	int y;
	int opcionMenu;
	int suma;
	int resta;
	float dividir;
	int multiplicacion;
	int factorialX;
	int factorialY;


	//system("clean");
	do{
		opcionMenu= getInt("\n1 - Ingresar primer operador \n 2 - Ingresar segundo operador\n 3 - Calcular operaciones\n 4 - Mostrar resultados\n 5 - Salir\n");
		switch(opcionMenu)
		{
			case 1:
				utn_getNumero(&x, "\nIngrese un número de 0 a 100\n", "\nError, vuelva a intentarlo\n", 0, 100, 3);
				break;
			case 2:
				utn_getNumero(&y, "\nIngrese otro número de 0 a 100\n", "\nError, vuelva a intentarlo\n", 0, 100, 3);
				break;
			case 3:
				sumaEnteros(x, y, &suma);
				restaEnteros(x, y, &resta);
				divisionNum(x, y, &dividir, "Error, no se puede dividir por cero");
				multiplicacionEnteros(x, y, &multiplicacion);
				factorialNum(x, &factorialX);
				factorialNum(y, &factorialY);
				break;
			case 4:
				imprimirResultados(suma,resta,dividir, multiplicacion, factorialX, factorialY);
				break;
		}

	}while(opcionMenu!=5);

	return EXIT_SUCCESS;
}

