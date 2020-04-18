/*
 * ejerUtn.h
 *
 *  Created on: Apr 14, 2020
 *      Author: juliana
 */

#ifndef UTN_H_
#define UTN_H_

/*
 * brief solicita un número al usuario y devuelve el resultado
 * param mensaje Es el mensaje a ser mostrado
 * return el número ingresado por el usuario
 */
int getInt(char mensaje[]);
/*
 * brief Verifica si el valor es numerico
 * str Array con la cadena a analizar
 * return 1 si es numerico y 0 si no lo es
 */
int esNumerico(char str[]);
/**
 * \brief Solicita un numero al usuario, luego de verificarlo devuelve el resultado
 * \param pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * \param mensaje Es el mensaje a ser mostrado
 * \param mensajeError Es el mensaje de Error a ser mostrado
 * \param minimo Es el numero minimo a ser aceptado
 * \param maximo Es el numero maximo a ser aceptado
 * \return Retorna 0 si se obtuvo el numero y -1 si no
 *
 */
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

#endif /* UTN_H_ */
