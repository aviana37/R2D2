#ifndef CRONOMETRO_H_INCLUDED
#define CRONOMETRO_H_INCLUDED

/*  Andre Viana Sena de Souza - 26/08/2014
**  PAA Projeto #1 - R2D2
*/

/** \file cronometro.h \brief Métodos para cronometragem de rotinas.
*/
/** \fn void ComecarCronometro()
*   \brief Inicializa o temporizador.
*   \fn unsigned long TerminarCronometro()
*   \brief Retorna a quantidade de milisegundos desde
*    a última inicialização do temporizador.
**/

#include <time.h>

void ComecarCronometro();
unsigned long TerminarCronometro();

#endif // CRONOMETRO_H_INCLUDED
