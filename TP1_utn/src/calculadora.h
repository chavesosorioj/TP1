/*
 * calculadora.h
 *
 *  Created on: Apr 17, 2020
 *      Author: juliana
 */

#ifndef CALCULADORA_H_
#define CALCULADORA_H_

/*
* brief función calcula factorial
* param recibe por parametro un numero
* return -1 si no se puede realizar y 0 si se pudo
*/
int factorialNum(int num, int *resultado);
/*
* brief función que divide numeros enteros
* param num1 primer numero a recibir
* param num2 segundo numero a recibir
* param resultado, producto de la operacion
* param error, mensaje a ser mortrado si num2 es cero
* return 0 se pudo dividir
*/
int divisionNum(int num1, int num2, float *resultado, char *error);
/*
* brief función que multiplica numeros enteros
* param num1 primer numero a recibir
* param num2 segundo numero a recibir
* param resultado, producto de la operacion
* return 0 se pudo multiplicar
*/

int multiplicacionEnteros(int num1, int num2, int *resultado);
/*
* brief función que resta numeros enteros
* param num1 primer numero a recibir
* param num2 segundo numero a recibir
* param resultado, producto de la operacion
* return 0 se pudo restar
*/
int restaEnteros(int num1, int num2, int *resultado);
/*
* brief función que suma numeros enteros
* param recibe por parametro los numeros
* return devuelve la suma
*/
int sumaEnteros(int num1, int num2, int *resultado);
/*
 * brief imprime las operaciones realizadas
 * return cero
 */

int imprimirResultados(int suma, int resta, float division, int multiplicacion, long int factorialX, long int factorialY);

#endif /* CALCULADORA_H_ */
